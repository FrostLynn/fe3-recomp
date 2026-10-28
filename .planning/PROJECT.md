# fe3-recomp — Ultraman Fighting Evolution 3 Static Recompilation

## Vision
Native port of Ultraman Fighting Evolution 3 (PS2, SLPS-25441) via static recompilation using PS2Recomp. The game's MIPS R5900 code is translated ahead-of-time to C++ and executed on a runtime that replaces PS2 hardware with native implementations.

## Core Value
A playable native port of UFE3 — all modes, all characters, running at 60 FPS on modern hardware without an emulator.

## Game Details
- **Title:** Ultraman Fighting Evolution 3
- **Platform:** PlayStation 2
- **Developer:** Banpresto / Metro
- **Region:** Japan (2004)
- **Serial:** SLPS-25441
- **ELF:** SLPS_254.41
- **Genre:** 3D Fighting Game
- **Characters:** 36+ Ultraman heroes and monsters

## Technical Profile
- **CPU:** MIPS R5900 (Emotion Engine), symbols stripped but ~924 `.gnu.linkonce` sections
- **Modules:** 62 ERX relocatable modules (PLAYER00-20, MISN, etc.)
- **VU1:** 2 microcode sets (~28KB, .DVP.overlay sections)
- **IOP:** Sony modules + SOUNDMAN.IRX (custom sound + data streaming)
- **Assets:** FILE1.BIN - FILE4.BIN (streamed via SOUNDMAN)
- **Video:** IPU-driven MPEG FMVs

## Reference Project
- idiazraz/ufe3-recomp (GPL-3.0) — early progress, fight renders at ~1/5 real time
- Waffle565/God-Of-War-Native-Port — reference for VU1 AOT + native GS approach

## Target Platforms
- **v1:** macOS (Apple Silicon)
- **v2:** Windows, Linux, Android, iOS

## Owner
Akhdan Rafif Nugraha (FrostLynn)
