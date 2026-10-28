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

// Function: sub_01C9A340
// Address: 0x1c9a340 - 0x1c9a3c0
void sub_01C9A340_0x1c9a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9A340_0x1c9a340");
#endif

    switch (ctx->pc) {
        case 0x1c9a364u: goto label_1c9a364;
        default: break;
    }

    ctx->pc = 0x1c9a340u;

    // 0x1c9a340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9a344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9a348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a34c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9a34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9a350: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c9a350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a354: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c9a354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a358: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9a358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9a35c: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9A35Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A364u);
    ctx->pc = 0x1C9A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A35Cu;
    // 0x1c9a360: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9A35Cu, 0x1C9A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A364u;
label_1c9a364:
    // 0x1c9a364: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c9a364u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c9a368: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c9a368u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c9a36c: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1c9a36cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c9a370: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c9a370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c9a374: 0x8c4b024c  lw          $t3, 0x24C($v0)
    ctx->pc = 0x1c9a374u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c9a378: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x1c9a378u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c9a37c: 0x8d6e0084  lw          $t6, 0x84($t3)
    ctx->pc = 0x1c9a37cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
    // 0x1c9a380: 0xae2a05c8  sw          $t2, 0x5C8($s1)
    ctx->pc = 0x1c9a380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1480), GPR_U32(ctx, 10));
    // 0x1c9a384: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c9a384u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c9a388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9a388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9a38c: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1c9a38cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c9a390: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c9a390u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c9a394: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1c9a394u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1c9a398: 0xae2e05c0  sw          $t6, 0x5C0($s1)
    ctx->pc = 0x1c9a398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 14));
    // 0x1c9a39c: 0x8d6f0050  lw          $t7, 0x50($t3)
    ctx->pc = 0x1c9a39cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x1c9a3a0: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1c9a3a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9a3a4: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1c9a3a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1c9a3a8: 0xae2f05c4  sw          $t7, 0x5C4($s1)
    ctx->pc = 0x1c9a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 15));
    // 0x1c9a3ac: 0xae2b05cc  sw          $t3, 0x5CC($s1)
    ctx->pc = 0x1c9a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 11));
    // 0x1c9a3b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9a3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a3b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9a3b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9a3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9A3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A3B8u;
        // 0x1c9a3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A3C0u;
}
