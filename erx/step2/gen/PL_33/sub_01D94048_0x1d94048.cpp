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

// Function: sub_01D94048
// Address: 0x1d94048 - 0x1d940c8
void sub_01D94048_0x1d94048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D94048_0x1d94048");
#endif

    switch (ctx->pc) {
        case 0x1d9406cu: goto label_1d9406c;
        default: break;
    }

    ctx->pc = 0x1d94048u;

    // 0x1d94048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d94048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9404c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9404cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d94050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d94050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d94054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d94058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d94058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9405c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d9405cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94060: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d94060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d94064: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94064u;
    SET_GPR_U32(ctx, 31, 0x1D9406Cu);
    ctx->pc = 0x1D94068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94064u;
    // 0x1d94068: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94064u, 0x1D9406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9406Cu;
label_1d9406c:
    // 0x1d9406c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d9406cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d94070: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d94070u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d94074: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1d94074u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d94078: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d94078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d9407c: 0x8c4b024c  lw          $t3, 0x24C($v0)
    ctx->pc = 0x1d9407cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d94080: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x1d94080u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d94084: 0x8d6e0084  lw          $t6, 0x84($t3)
    ctx->pc = 0x1d94084u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
    // 0x1d94088: 0xae2a05c8  sw          $t2, 0x5C8($s1)
    ctx->pc = 0x1d94088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1480), GPR_U32(ctx, 10));
    // 0x1d9408c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d9408cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d94090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d94090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d94094: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1d94094u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1d94098: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d94098u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d9409c: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1d9409cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1d940a0: 0xae2e05c0  sw          $t6, 0x5C0($s1)
    ctx->pc = 0x1d940a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 14));
    // 0x1d940a4: 0x8d6f0050  lw          $t7, 0x50($t3)
    ctx->pc = 0x1d940a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x1d940a8: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1d940a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d940ac: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1d940acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1d940b0: 0xae2f05c4  sw          $t7, 0x5C4($s1)
    ctx->pc = 0x1d940b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 15));
    // 0x1d940b4: 0xae2b05cc  sw          $t3, 0x5CC($s1)
    ctx->pc = 0x1d940b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 11));
    // 0x1d940b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d940b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d940bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d940bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d940c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D940C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D940C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D940C0u;
        // 0x1d940c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D940C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D940C8u;
}
