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

// Function: sub_01C6B648
// Address: 0x1c6b648 - 0x1c6b6c8
void sub_01C6B648_0x1c6b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6B648_0x1c6b648");
#endif

    switch (ctx->pc) {
        case 0x1c6b66cu: goto label_1c6b66c;
        default: break;
    }

    ctx->pc = 0x1c6b648u;

    // 0x1c6b648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6b64c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6b64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6b650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6b654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6b654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6b658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6b658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b65c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c6b65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b660: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6b660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6b664: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6B664u;
    SET_GPR_U32(ctx, 31, 0x1C6B66Cu);
    ctx->pc = 0x1C6B668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B664u;
    // 0x1c6b668: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6B664u, 0x1C6B66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B66Cu;
label_1c6b66c:
    // 0x1c6b66c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c6b66cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6b670: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c6b670u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c6b674: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1c6b674u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c6b678: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c6b678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c6b67c: 0x8c4b024c  lw          $t3, 0x24C($v0)
    ctx->pc = 0x1c6b67cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c6b680: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x1c6b680u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c6b684: 0x8d6e0084  lw          $t6, 0x84($t3)
    ctx->pc = 0x1c6b684u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 132)));
    // 0x1c6b688: 0xae2a05c8  sw          $t2, 0x5C8($s1)
    ctx->pc = 0x1c6b688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1480), GPR_U32(ctx, 10));
    // 0x1c6b68c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c6b68cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c6b690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6b690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b694: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1c6b694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c6b698: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c6b698u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c6b69c: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1c6b69cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1c6b6a0: 0xae2e05c0  sw          $t6, 0x5C0($s1)
    ctx->pc = 0x1c6b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 14));
    // 0x1c6b6a4: 0x8d6f0050  lw          $t7, 0x50($t3)
    ctx->pc = 0x1c6b6a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x1c6b6a8: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1c6b6a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6b6ac: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1c6b6acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1c6b6b0: 0xae2f05c4  sw          $t7, 0x5C4($s1)
    ctx->pc = 0x1c6b6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 15));
    // 0x1c6b6b4: 0xae2b05cc  sw          $t3, 0x5CC($s1)
    ctx->pc = 0x1c6b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1484), GPR_U32(ctx, 11));
    // 0x1c6b6b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6b6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6b6bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6b6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6b6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B6C0u;
        // 0x1c6b6c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B6C8u;
}
