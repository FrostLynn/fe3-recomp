# fe3-recomp Roadmap

## Phase 0 — Foundation (Fork + macOS Port)
**Goal:** Build and boot on macOS Apple Silicon
**Status:** IN PROGRESS

### Success Criteria
- [ ] PS2Recomp tools built on ARM64
- [ ] ELF recompiled to C++ (8K+ functions)
- [ ] ERX modules recompiled (59 modules)
- [ ] Runtime builds on macOS
- [ ] Game boots to title screen

## Phase 1 — Playable Fight Mode
**Goal:** One fight playable end-to-end (2 characters, 1 stage, timer/KO)

### Success Criteria
- [ ] 60 FPS performance
- [ ] Input mapping (gamepad + keyboard)
- [ ] Audio playback (SPU2 → native)
- [ ] Fight flow: round start → fight → KO/time-up → result

## Phase 2 — Menu Navigation + Mode Selection
**Goal:** Title → mode select → character select → stage select → fight

### Success Criteria
- [ ] FMV playback (IPU/MPEG)
- [ ] Menu rendering (2D UI)
- [ ] All mode selection flows
- [ ] Scene transitions

## Phase 3 — Story Mode + ERX Modules
**Goal:** Story mode playable — cutscenes, missions, boss fights

### Success Criteria
- [ ] All 59 ERX modules load correctly
- [ ] Mission scripting works
- [ ] Complete 1 full story arc

## Phase 4 — Full Game Completion
**Goal:** All modes, all characters, unlockables

### Success Criteria
- [ ] VS Mode (2P)
- [ ] Practice Mode
- [ ] Gallery / Extras
- [ ] All 36+ characters verified
- [ ] Save system

## Phase 5 — Performance + Polish (macOS Release)
**Goal:** 60 FPS stable, audio clean, distribution-ready

### Success Criteria
- [ ] 60 FPS sustained
- [ ] Resolution scaling
- [ ] Widescreen 16:9
- [ ] macOS .app bundle

## Phase 6 — Cross-Platform
**Goal:** Windows, Linux, Android, iOS builds

### Success Criteria
- [ ] Windows: MSVC/Vulkan
- [ ] Linux: GCC/Vulkan
- [ ] Android: NDK/GLES
- [ ] iOS: Metal
- [ ] CI/CD pipeline
