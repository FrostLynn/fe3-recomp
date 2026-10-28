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

// Function: sub_01DCDE68
// Address: 0x1dcde68 - 0x1dcded8
void sub_01DCDE68_0x1dcde68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCDE68_0x1dcde68");
#endif

    switch (ctx->pc) {
        case 0x1dcde8cu: goto label_1dcde8c;
        case 0x1dcdea0u: goto label_1dcdea0;
        default: break;
    }

    ctx->pc = 0x1dcde68u;

    // 0x1dcde68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcde68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcde6c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcde6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcde70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcde70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcde74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dcde74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dcde78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcde78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcde7c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcde7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcde80: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcde80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcde84: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCDE84u;
    SET_GPR_U32(ctx, 31, 0x1DCDE8Cu);
    ctx->pc = 0x1DCDE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDE84u;
    // 0x1dcde88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCDE84u, 0x1DCDE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDE8Cu;
label_1dcde8c:
    // 0x1dcde8c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcde8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcde90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcde90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcde94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcde94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcde98: 0xc77360e  jal         func_1DCD838
    ctx->pc = 0x1DCDE98u;
    SET_GPR_U32(ctx, 31, 0x1DCDEA0u);
    ctx->pc = 0x1DCDE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDE98u;
    // 0x1dcde9c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD838u, 0x1DCDE98u, 0x1DCDEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDEA0u;
label_1dcdea0:
    // 0x1dcdea0: 0x8e2f081c  lw          $t7, 0x81C($s1)
    ctx->pc = 0x1dcdea0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
    // 0x1dcdea4: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCDEA4u;
    {
        const bool branch_taken_0x1dcdea4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDEA4u;
        // 0x1dcdea8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdea4) {
            ctx->pc = 0x1DCDEC4u;
            goto label_1dcdec4;
        }
    }
    ctx->pc = 0x1DCDEACu;
    // 0x1dcdeac: 0x8c4f081c  lw          $t7, 0x81C($v0)
    ctx->pc = 0x1dcdeacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
    // 0x1dcdeb0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCDEB0u;
    {
        const bool branch_taken_0x1dcdeb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDEB0u;
        // 0x1dcdeb4: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdeb0) {
            ctx->pc = 0x1DCDEC4u;
            goto label_1dcdec4;
        }
    }
    ctx->pc = 0x1DCDEB8u;
    // 0x1dcdeb8: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dcdeb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcdebc: 0xa1ee0428  sb          $t6, 0x428($t7)
    ctx->pc = 0x1dcdebcu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1064), (uint8_t)GPR_U32(ctx, 14));
    // 0x1dcdec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcdec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcdec4:
    // 0x1dcdec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcdec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcdec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dcdec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcdecc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDECCu;
        // 0x1dcded0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDED4u;
    // 0x1dcded4: 0x0  nop
    ctx->pc = 0x1dcded4u;
    // NOP
    ctx->pc = 0x1dcded8u;
}
