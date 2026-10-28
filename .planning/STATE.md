# Project State

## Current Phase
Phase 0 — Foundation (Fork + macOS Port)

## Completed
- [x] Git repo initialized
- [x] ISO extracted → disc/ (SLPS_254.41, 59 ERX modules, 7 IRX, FILE1-4.BIN)
- [x] PS2Recomp cloned @ c5a9d02 + patch applied (14.5K lines)
- [x] ps2_analyzer + ps2_recomp built on ARM64
- [x] ELF recompiled: 8477 C++ source files generated
- [x] ERX pipeline: 59 modules wrapped, recompiled, tables generated
- [x] Runtime CMake configured (raylib + ffmpeg + SDL2)
- [ ] Runtime build (ps2EntryRunner) — IN PROGRESS

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
