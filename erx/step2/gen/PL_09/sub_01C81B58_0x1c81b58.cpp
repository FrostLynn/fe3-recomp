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

// Function: sub_01C81B58
// Address: 0x1c81b58 - 0x1c81be8
void sub_01C81B58_0x1c81b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81B58_0x1c81b58");
#endif

    switch (ctx->pc) {
        case 0x1c81b6cu: goto label_1c81b6c;
        case 0x1c81b80u: goto label_1c81b80;
        case 0x1c81b84u: goto label_1c81b84;
        case 0x1c81bccu: goto label_1c81bcc;
        default: break;
    }

    ctx->pc = 0x1c81b58u;

    // 0x1c81b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c81b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c81b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c81b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c81b60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c81b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c81b64: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C81B64u;
    SET_GPR_U32(ctx, 31, 0x1C81B6Cu);
    ctx->pc = 0x1C81B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81B64u;
    // 0x1c81b68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C81B64u, 0x1C81B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81B6Cu;
label_1c81b6c:
    // 0x1c81b6c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c81b6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c81b70: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C81B70u;
    {
        const bool branch_taken_0x1c81b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C81B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81B70u;
        // 0x1c81b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81b70) {
            ctx->pc = 0x1C81B94u;
            goto label_1c81b94;
        }
    }
    ctx->pc = 0x1C81B78u;
    // 0x1c81b78: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C81B78u;
    SET_GPR_U32(ctx, 31, 0x1C81B80u);
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C81B78u, 0x1C81B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81B80u;
label_1c81b80:
    // 0x1c81b80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c81b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c81b84:
    // 0x1c81b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c81b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c81b88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c81b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c81b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C81B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C81B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81B8Cu;
        // 0x1c81b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C81B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C81B94u;
label_1c81b94:
    // 0x1c81b94: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C81B94u;
    {
        const bool branch_taken_0x1c81b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C81B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81B94u;
        // 0x1c81b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81b94) {
            ctx->pc = 0x1C81B84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c81b84;
        }
    }
    ctx->pc = 0x1C81B9Cu;
    // 0x1c81b9c: 0x0  nop
    ctx->pc = 0x1c81b9cu;
    // NOP
    // 0x1c81ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c81ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c81ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c81ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c81ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c81bac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c81bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c81bb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c81bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c81bb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c81bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c81bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81bbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c81bbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81bc0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c81bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c81bc4: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C81BC4u;
    SET_GPR_U32(ctx, 31, 0x1C81BCCu);
    ctx->pc = 0x1C81BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81BC4u;
    // 0x1c81bc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C81BC4u, 0x1C81BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81BCCu;
label_1c81bcc:
    // 0x1c81bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81bd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c81bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c81bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c81bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c81bd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c81bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c81bdc: 0x87203da  j           func_1C80F68
    ctx->pc = 0x1C81BDCu;
    ctx->pc = 0x1C81BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81BDCu;
    // 0x1c81be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F68u;
    sub_01C80F68_0x1c80f68(rdram, ctx, runtime); return;
    ctx->pc = 0x1C81BE4u;
    // 0x1c81be4: 0x0  nop
    ctx->pc = 0x1c81be4u;
    // NOP
    ctx->pc = 0x1c81be8u;
}
