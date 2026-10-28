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

// Function: sub_01CFE7C0
// Address: 0x1cfe7c0 - 0x1cfe8c0
void sub_01CFE7C0_0x1cfe7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFE7C0_0x1cfe7c0");
#endif

    switch (ctx->pc) {
        case 0x1cfe7e4u: goto label_1cfe7e4;
        case 0x1cfe874u: goto label_1cfe874;
        default: break;
    }

    ctx->pc = 0x1cfe7c0u;

    // 0x1cfe7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cfe7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cfe7c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cfe7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cfe7c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfe7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfe7cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfe7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfe7d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cfe7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe7d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cfe7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe7d8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cfe7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cfe7dc: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE7DCu;
    SET_GPR_U32(ctx, 31, 0x1CFE7E4u);
    ctx->pc = 0x1CFE7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE7DCu;
    // 0x1cfe7e0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE7DCu, 0x1CFE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE7E4u;
label_1cfe7e4:
    // 0x1cfe7e4: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1cfe7e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cfe7e8: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1cfe7e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1cfe7ec: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1cfe7ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cfe7f0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cfe7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cfe7f4: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cfe7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cfe7f8: 0x860e000e  lh          $t6, 0xE($s0)
    ctx->pc = 0x1cfe7f8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1cfe7fc: 0x8609000c  lh          $t1, 0xC($s0)
    ctx->pc = 0x1cfe7fcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfe800: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cfe800u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe804: 0xae2e0434  sw          $t6, 0x434($s1)
    ctx->pc = 0x1cfe804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1076), GPR_U32(ctx, 14));
    // 0x1cfe808: 0xae290430  sw          $t1, 0x430($s1)
    ctx->pc = 0x1cfe808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 9));
    // 0x1cfe80c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cfe80cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cfe810: 0x8c4c00b0  lw          $t4, 0xB0($v0)
    ctx->pc = 0x1cfe810u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1cfe814: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1cfe814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1cfe818: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1cfe818u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cfe81c: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1cfe81cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1cfe820: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1cfe820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe824: 0x8d8d0010  lw          $t5, 0x10($t4)
    ctx->pc = 0x1cfe824u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1cfe828: 0x25ce4610  addiu       $t6, $t6, 0x4610
    ctx->pc = 0x1cfe828u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17936));
    // 0x1cfe82c: 0xae2e0420  sw          $t6, 0x420($s1)
    ctx->pc = 0x1cfe82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 14));
    // 0x1cfe830: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1cfe830u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cfe834: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1cfe834u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1cfe838: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x1cfe838u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cfe83c: 0xae2f0444  sw          $t7, 0x444($s1)
    ctx->pc = 0x1cfe83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1092), GPR_U32(ctx, 15));
    // 0x1cfe840: 0xae2d0428  sw          $t5, 0x428($s1)
    ctx->pc = 0x1cfe840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1064), GPR_U32(ctx, 13));
    // 0x1cfe844: 0x8e0f0020  lw          $t7, 0x20($s0)
    ctx->pc = 0x1cfe844u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cfe848: 0xe620042c  swc1        $f0, 0x42C($s1)
    ctx->pc = 0x1cfe848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1068), bits); }
    // 0x1cfe84c: 0xae2f0450  sw          $t7, 0x450($s1)
    ctx->pc = 0x1cfe84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 15));
    // 0x1cfe850: 0xae2b0440  sw          $t3, 0x440($s1)
    ctx->pc = 0x1cfe850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1088), GPR_U32(ctx, 11));
    // 0x1cfe854: 0x8e0f0024  lw          $t7, 0x24($s0)
    ctx->pc = 0x1cfe854u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1cfe858: 0xae2c0424  sw          $t4, 0x424($s1)
    ctx->pc = 0x1cfe858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1060), GPR_U32(ctx, 12));
    // 0x1cfe85c: 0xae2f0454  sw          $t7, 0x454($s1)
    ctx->pc = 0x1cfe85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 15));
    // 0x1cfe860: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1cfe860u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1cfe864: 0xae2f0458  sw          $t7, 0x458($s1)
    ctx->pc = 0x1cfe864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1112), GPR_U32(ctx, 15));
    // 0x1cfe868: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1cfe868u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1cfe86c: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CFE86Cu;
    {
        const bool branch_taken_0x1cfe86c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1CFE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE86Cu;
        // 0x1cfe870: 0xae2f045c  sw          $t7, 0x45C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe86c) {
            ctx->pc = 0x1CFE8ACu;
            goto label_1cfe8ac;
        }
    }
    ctx->pc = 0x1CFE874u;
label_1cfe874:
    // 0x1cfe874: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1cfe874u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1cfe878: 0x1f06021  addu        $t4, $t7, $s0
    ctx->pc = 0x1cfe878u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1cfe87c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cfe87cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cfe880: 0x8d8d0030  lw          $t5, 0x30($t4)
    ctx->pc = 0x1cfe880u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1cfe884: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1cfe884u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1cfe888: 0x149582a  slt         $t3, $t2, $t1
    ctx->pc = 0x1cfe888u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1cfe88c: 0xaded0460  sw          $t5, 0x460($t7)
    ctx->pc = 0x1cfe88cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1120), GPR_U32(ctx, 13));
    // 0x1cfe890: 0x8d8e0034  lw          $t6, 0x34($t4)
    ctx->pc = 0x1cfe890u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1cfe894: 0xadee0464  sw          $t6, 0x464($t7)
    ctx->pc = 0x1cfe894u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1124), GPR_U32(ctx, 14));
    // 0x1cfe898: 0x8d8d0038  lw          $t5, 0x38($t4)
    ctx->pc = 0x1cfe898u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1cfe89c: 0xaded0468  sw          $t5, 0x468($t7)
    ctx->pc = 0x1cfe89cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1128), GPR_U32(ctx, 13));
    // 0x1cfe8a0: 0x8d8e003c  lw          $t6, 0x3C($t4)
    ctx->pc = 0x1cfe8a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1cfe8a4: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CFE8A4u;
    {
        const bool branch_taken_0x1cfe8a4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE8A4u;
        // 0x1cfe8a8: 0xadee046c  sw          $t6, 0x46C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 1132), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe8a4) {
            ctx->pc = 0x1CFE874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfe874;
        }
    }
    ctx->pc = 0x1CFE8ACu;
label_1cfe8ac:
    // 0x1cfe8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfe8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe8b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cfe8b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfe8b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfe8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfe8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFE8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE8B8u;
        // 0x1cfe8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFE8C0u;
}
