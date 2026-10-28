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

// Function: sub_01DB2630
// Address: 0x1db2630 - 0x1db2730
void sub_01DB2630_0x1db2630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB2630_0x1db2630");
#endif

    switch (ctx->pc) {
        case 0x1db2654u: goto label_1db2654;
        case 0x1db26e4u: goto label_1db26e4;
        default: break;
    }

    ctx->pc = 0x1db2630u;

    // 0x1db2630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db2630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db2634: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db2634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db2638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db263c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db263cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db2640: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1db2640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2644: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1db2644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2648: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1db2648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1db264c: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB264Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2654u);
    ctx->pc = 0x1DB2650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB264Cu;
    // 0x1db2650: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB264Cu, 0x1DB2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2654u;
label_1db2654:
    // 0x1db2654: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1db2654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2658: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1db2658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1db265c: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1db265cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1db2660: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db2660u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2664: 0xe62001f0  swc1        $f0, 0x1F0($s1)
    ctx->pc = 0x1db2664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
    // 0x1db2668: 0xae2f01ec  sw          $t7, 0x1EC($s1)
    ctx->pc = 0x1db2668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 15));
    // 0x1db266c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1db266cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2670: 0x8e0d0008  lw          $t5, 0x8($s0)
    ctx->pc = 0x1db2670u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1db2674: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1db2674u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1db2678: 0xe62001fc  swc1        $f0, 0x1FC($s1)
    ctx->pc = 0x1db2678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
    // 0x1db267c: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1db267cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1db2680: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1db2680u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1db2684: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1db2684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2688: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1db2688u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1db268c: 0xe62001f8  swc1        $f0, 0x1F8($s1)
    ctx->pc = 0x1db268cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 504), bits); }
    // 0x1db2690: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1db2690u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1db2694: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1db2694u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db2698: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1db2698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db269c: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1db269cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1db26a0: 0xae2b01e8  sw          $t3, 0x1E8($s1)
    ctx->pc = 0x1db26a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 11));
    // 0x1db26a4: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x1db26a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x1db26a8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1db26a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db26ac: 0x8dcf0084  lw          $t7, 0x84($t6)
    ctx->pc = 0x1db26acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1db26b0: 0xe6200204  swc1        $f0, 0x204($s1)
    ctx->pc = 0x1db26b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
    // 0x1db26b4: 0x8c4e00b4  lw          $t6, 0xB4($v0)
    ctx->pc = 0x1db26b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1db26b8: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1db26b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1db26bc: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1db26bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1db26c0: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1db26c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1db26c4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1db26c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db26c8: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1db26c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1db26cc: 0xae2f01e0  sw          $t7, 0x1E0($s1)
    ctx->pc = 0x1db26ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 15));
    // 0x1db26d0: 0xae2e01e4  sw          $t6, 0x1E4($s1)
    ctx->pc = 0x1db26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 14));
    // 0x1db26d4: 0xae2d01f4  sw          $t5, 0x1F4($s1)
    ctx->pc = 0x1db26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 13));
    // 0x1db26d8: 0x19600010  blez        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DB26D8u;
    {
        const bool branch_taken_0x1db26d8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x1DB26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB26D8u;
        // 0x1db26dc: 0xe6200208  swc1        $f0, 0x208($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db26d8) {
            ctx->pc = 0x1DB271Cu;
            goto label_1db271c;
        }
    }
    ctx->pc = 0x1DB26E0u;
    // 0x1db26e0: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1db26e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1db26e4:
    // 0x1db26e4: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1db26e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1db26e8: 0x1f06021  addu        $t4, $t7, $s0
    ctx->pc = 0x1db26e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1db26ec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1db26ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1db26f0: 0x8d8d0030  lw          $t5, 0x30($t4)
    ctx->pc = 0x1db26f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1db26f4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1db26f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1db26f8: 0x149582a  slt         $t3, $t2, $t1
    ctx->pc = 0x1db26f8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1db26fc: 0xaded0210  sw          $t5, 0x210($t7)
    ctx->pc = 0x1db26fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 528), GPR_U32(ctx, 13));
    // 0x1db2700: 0x8d8e0034  lw          $t6, 0x34($t4)
    ctx->pc = 0x1db2700u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1db2704: 0xadee0214  sw          $t6, 0x214($t7)
    ctx->pc = 0x1db2704u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 532), GPR_U32(ctx, 14));
    // 0x1db2708: 0x8d8d0038  lw          $t5, 0x38($t4)
    ctx->pc = 0x1db2708u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1db270c: 0xaded0218  sw          $t5, 0x218($t7)
    ctx->pc = 0x1db270cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 536), GPR_U32(ctx, 13));
    // 0x1db2710: 0x8d8e003c  lw          $t6, 0x3C($t4)
    ctx->pc = 0x1db2710u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1db2714: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DB2714u;
    {
        const bool branch_taken_0x1db2714 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2714u;
        // 0x1db2718: 0xadee021c  sw          $t6, 0x21C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 540), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2714) {
            ctx->pc = 0x1DB26E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db26e4;
        }
    }
    ctx->pc = 0x1DB271Cu;
label_1db271c:
    // 0x1db271c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db271cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db2720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db2724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2728: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2728u;
        // 0x1db272c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2730u;
}
