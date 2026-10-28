#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01DB22A0
// Address: 0x1db22a0 - 0x1db23b0
void sub_01DB22A0_0x1db22a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB22A0_0x1db22a0");
#endif

    switch (ctx->pc) {
        case 0x1db22c8u: goto label_1db22c8;
        case 0x1db2308u: goto label_1db2308;
        case 0x1db235cu: goto label_1db235c;
        default: break;
    }

    ctx->pc = 0x1db22a0u;

    // 0x1db22a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db22a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db22a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db22a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db22a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db22ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db22acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1db22b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1db22b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db22b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1db22b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1db22b8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1db22b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db22bc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1db22bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1db22c0: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB22C0u;
    SET_GPR_U32(ctx, 31, 0x1DB22C8u);
    ctx->pc = 0x1DB22C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB22C0u;
    // 0x1db22c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB22C0u, 0x1DB22C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB22C8u;
label_1db22c8:
    // 0x1db22c8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1db22c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1db22cc: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1db22ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1db22d0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1db22d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1db22d4: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1db22d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1db22d8: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1db22d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1db22dc: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1db22dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1db22e0: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1db22e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1db22e4: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1db22e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1db22e8: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1db22e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1db22ec: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1db22ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1db22f0: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1db22f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1db22f4: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1db22f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1db22f8: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1db22f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1db22fc: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1db22fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1db2300: 0xc76c3c6  jal         func_1DB0F18
    ctx->pc = 0x1DB2300u;
    SET_GPR_U32(ctx, 31, 0x1DB2308u);
    ctx->pc = 0x1DB2304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2300u;
    // 0x1db2304: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F18u, 0x1DB2300u, 0x1DB2308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2308u;
label_1db2308:
    // 0x1db2308: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1db2308u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1db230c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1db230cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1db2310: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1db2310u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1db2314: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db2314u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2318: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1db2318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1db231c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1db231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2320: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1db2320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1db2324: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1db2324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1db2328: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1db2328u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1db232c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1db232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2330: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1db2330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1db2334: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1db2334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1db2338: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1db2338u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1db233c: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1db233cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1db2340: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1db2340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1db2344: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1db2344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2348: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1db2348u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1db234c: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1db234cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1db2350: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1db2350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1db2354: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1db2354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1db2358: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1db2358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1db235c:
    // 0x1db235c: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1db235cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1db2360: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1db2360u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1db2364: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1db2364u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1db2368: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1db2368u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1db236c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1db236cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1db2370: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1db2370u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1db2374: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1db2374u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1db2378: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1db2378u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1db237c: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1db237cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1db2380: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1db2380u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1db2384: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1db2384u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1db2388: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1db2388u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1db238c: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DB238Cu;
    {
        const bool branch_taken_0x1db238c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB238Cu;
        // 0x1db2390: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db238c) {
            ctx->pc = 0x1DB235Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db235c;
        }
    }
    ctx->pc = 0x1DB2394u;
    // 0x1db2394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2398: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db2398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db239c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db239cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db23a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1db23a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db23a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB23A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB23A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB23A4u;
        // 0x1db23a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB23A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB23ACu;
    // 0x1db23ac: 0x0  nop
    ctx->pc = 0x1db23acu;
    // NOP
    ctx->pc = 0x1db23b0u;
}
