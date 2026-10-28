# Project State

## Current Phase
Phase 1 — Playable Fight Mode (Next)

## Completed (Phase 0: Foundation / macOS Port)
- [x] Git repo initialized
- [x] ISO extracted → disc/ (SLPS_254.41, 59 ERX modules, 7 IRX, FILE1-4.BIN)
- [x] PS2Recomp cloned @ c5a9d02 + upstream patch applied (14.5K lines)
- [x] Case-collision fixes resolved for APFS (IPU_Fifo.cpp/.h vs ipu_fifo)
- [x] ARM64 compatibility: sse2neon shim in ipu_compat.h, ARCH_ARM64 enabled, NEON yuv2rgb active
- [x] macOS POSIX fixes: replaced Linux sys/prctl.h and REG_RIP with macOS pthread_getname_np and __ss.__pc
- [x] Missing PS2 kernel Syscall 0x7E (__NR_MachineType) implemented (returns 0 for retail console)
- [x] ps2_analyzer + ps2_recomp built on ARM64 Apple Silicon
- [x] ELF recompiled: 8477 C++ source files generated
- [x] ERX pipeline: 59 modules wrapped, recompiled (16,457 C++ functions), metadata tables generated
- [x] Runtime CMake configured (raylib 5.5 + ffmpeg 9.0.2 + SDL2 + OpenGL 4.1 Metal backend)
- [x] ps2EntryRunner compiled via ThinLTO Unity build and codesigned (82 MB arm64 Mach-O)
- [x] Keyboard + gamepad controls mapped and verified
- [x] Automated input (PS2X_AUTO_INPUT=1) implemented for scripted boot testing
- [x] Game successfully boots to Health Warning screen, Title/Intro screen (Ultraman + Ultraman Tiga), and Story Mode mission briefing (Golza's Counterattack)
- [x] Dedicated patches/macos_arm64.patch created and setup.sh / rebuild.sh / run.sh updated for macOS

## Known Issues
- Upstream targets Linux x86-64 only — macOS port may have OpenGL/Metal issues
- VU1/GS performance: ~1/5 real time in upstream (needs optimization)
- SSE4/AVX paths in runtime need ARM64 NEON equivalents

## Decisions
- Fork from idiazraz/ufe3-recomp rather than starting from scratch
- Use PS2Recomp upstream @ c5a9d02 with game-specific patches
- Target macOS first, then cross-platform

## Notification
- Telegram: @raphael2nd_bot → chat_id 972335645
