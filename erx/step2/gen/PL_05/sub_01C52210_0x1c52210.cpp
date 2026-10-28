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

// Function: sub_01C52210
// Address: 0x1c52210 - 0x1c52260
void sub_01C52210_0x1c52210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52210_0x1c52210");
#endif

    switch (ctx->pc) {
        case 0x1c52224u: goto label_1c52224;
        case 0x1c52230u: goto label_1c52230;
        case 0x1c5223cu: goto label_1c5223c;
        default: break;
    }

    ctx->pc = 0x1c52210u;

    // 0x1c52210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c52214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c52218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c5221c: 0xc7140fa  jal         func_1C503E8
    ctx->pc = 0x1C5221Cu;
    SET_GPR_U32(ctx, 31, 0x1C52224u);
    ctx->pc = 0x1C52220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5221Cu;
    // 0x1c52220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C503E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C503E8u, 0x1C5221Cu, 0x1C52224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52224u;
label_1c52224:
    // 0x1c52224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52228: 0xc7140f6  jal         func_1C503D8
    ctx->pc = 0x1C52228u;
    SET_GPR_U32(ctx, 31, 0x1C52230u);
    ctx->pc = 0x1C5222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52228u;
    // 0x1c5222c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C503D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C503D8u, 0x1C52228u, 0x1C52230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52230u;
label_1c52230:
    // 0x1c52230: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c52230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c52234: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C52234u;
    SET_GPR_U32(ctx, 31, 0x1C5223Cu);
    ctx->pc = 0x1C52238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52234u;
    // 0x1c52238: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C52234u, 0x1C5223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5223Cu;
label_1c5223c:
    // 0x1c5223c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c5223cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c52240: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1c52240u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52248: 0x8ded0084  lw          $t5, 0x84($t7)
    ctx->pc = 0x1c52248u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c5224c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c5224cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52250: 0xa1ae4416  sb          $t6, 0x4416($t5)
    ctx->pc = 0x1c52250u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 17430), (uint8_t)GPR_U32(ctx, 14));
    // 0x1c52254: 0x3e00008  jr          $ra
    ctx->pc = 0x1C52254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52254u;
        // 0x1c52258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5225Cu;
    // 0x1c5225c: 0x0  nop
    ctx->pc = 0x1c5225cu;
    // NOP
    ctx->pc = 0x1c52260u;
}
