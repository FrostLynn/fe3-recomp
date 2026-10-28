# fe3-recomp

Static recompilation of Ultraman Fighting Evolution 3 (PlayStation 2, Japan, serial `SLPS-25441`) to native code, built on the PS2Recomp toolchain.

> **Status:** Early development. The recompiled binary boots natively on macOS Apple Silicon, completes kernel and memory card initialization, renders the health warning screen, plays the intro copyright sequence, and enters Story Mode (Ultra Mode) mission briefings through dynamic ERX module execution. In-game 3D rendering optimization and complete audio playback are in progress.

This repository contains no copyrighted game code, assets, audio, or disc images. You must provide a legitimately dumped copy of the original game disc.

## Requirements

The current target is macOS running on Apple Silicon (arm64).

Prerequisites available via Homebrew:

```bash
brew install cmake ninja p7zip ffmpeg sdl2
```

Ensure Xcode Command Line Tools are installed:

```bash
xcode-select --install
```

## Project Setup

### 1. Build Tools

Run `setup.sh` to clone PS2Recomp at the pinned commit, apply project and macOS ARM64 patches, and compile `ps2_analyzer` and `ps2_recomp`:

```bash
./setup.sh
```

### 2. Extract Disc Contents

Extract your copy of *Ultraman Fighting Evolution 3* into the `disc/` directory:

```bash
mkdir -p disc
7z x -odisc "Ultraman - Fighting Evolution 3 (Japan).iso"
```

Verify that the following files and directories exist under `disc/`:

- `disc/SLPS_254.41` (main game executable)
- `disc/SYSTEM.CNF`
- `disc/ERX/` (relocatable modules for characters and missions)
- `disc/IRX/` (IOP hardware and driver modules)
- `disc/FILE1.BIN` through `disc/FILE4.BIN` (game data archives)

### 3. Recompile and Build Runner

Run `rebuild.sh` to lift the main binary and all ERX modules into C++, compile the runtime with ThinLTO, and sign the executable:

```bash
./rebuild.sh
```

### 4. Run

Launch the game from the disc directory:

```bash
./run.sh
```

To run with a time limit in seconds (useful for automated testing):

```bash
./run.sh 30
```

## Controls

### Keyboard

| Button | Key |
| --- | --- |
| D-Pad | Arrow Keys / W, A, S, D |
| Circle (O) | C / Escape |
| Cross (X) | X / Space |
| Square | Z |
| Triangle | V |
| L1 / R1 | Q / E |
| L2 / R2 | Left Shift / Right Shift |
| Start | Enter |
| Select | Tab |

### Gamepad

Any standard controller recognized by SDL2 or GLFW (DualShock 4, DualSense, Xbox Wireless Controller, Nintendo Switch Pro Controller) is detected automatically on startup.

## Architecture

1. **Emotion Engine (R5900):** The primary ELF binary (`SLPS_254.41`) translates into 8,477 standalone C++ translation units. Control flow graphs, register mapping, and PS2-specific MMI instructions are preserved ahead of time.
2. **Relocatable Modules (ERX):** 59 distinct modules under `disc/ERX` (including `PLAYER00` through `PLAYER20` and `MISN_1` through `MISN_20`) are parsed, wrapped, recompiled into 16,457 C++ functions, and indexed via static dispatch tables.
3. **Motion Video (IPU):** The runtime vendors PCSX2's IPU core adapted for ARM64 NEON with `sse2neon`, decoding MPEG streams directly into RGB32 macroblocks.
4. **Graphics Synthesizer (GS):** Graphics rendering runs through Raylib 5.5 on an OpenGL 4.1 Metal backend with host VRAM emulation and GIF packet arbitration.
5. **I/O Processor (IOP) & Audio:** An R3000A interpreter hosts Sony kernel drivers alongside the game's custom `SOUNDMAN.IRX`, reading audio and scenario data from disc archives.

## Environment Variables

The runner recognizes several debug and configuration switches:

| Variable | Description |
| --- | --- |
| `PS2X_SHOT_DIR=<path>` | Directory where window frame captures are exported |
| `PS2X_SHOT_EVERY=<n>` | Interval in frames between saved screenshots |
| `PS2X_AUTO_INPUT=1` | Sends periodic Start and Circle button presses to clear boot prompts |
| `PS2X_VU1_AOT=1` | Enables ahead-of-time compiled VU1 microprograms |
| `PS2X_VU1_DUMP_DIR=<path>` | Dumps uploaded VU1 microprogram binaries for compilation |
| `PS2X_HIDE_DEBUG_UI=1` | Starts with the Dear ImGui runtime debug bar collapsed (toggle with F1) |
| `PS2X_IDLE_DUMP=<ms>` | Periodically outputs EE thread, semaphore, and scheduler state |

## Roadmap

- [x] **Phase 0: macOS Native Foundation** (ARM64 toolchain, full ELF/ERX recompilation, boot to title and story mode briefing)
- [ ] **Phase 1: Playable Fight Mode** (VU1 microcode acceleration, 60 FPS pacing, input polish)
- [ ] **Phase 2: Menu Navigation & Audio** (BGM/SFX voice streaming, character and stage select)
- [ ] **Phase 3: Story Mode Completion** (Mission scripting, mid-fight transformations, boss encounters)
- [ ] **Phase 4: Full Game Verification** (All 36+ characters, VS Mode, Practice Mode, Memory Card saves)
- [ ] **Phase 5: Release Packaging** (Standalone `.app` bundle, resolution scaling, 16:9 widescreen)
- [ ] **Phase 6: Cross-Platform** (Windows, Linux, Android, iOS ports)

## License

This project is licensed under the GNU General Public License v3.0 (GPL-3.0), matching the upstream PS2Recomp project. Ultraman and all related characters and media are trademarks and copyrights of Tsuburaya Productions and Bandai Namco Entertainment.
