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

// Function: sub_01DD5B90
// Address: 0x1dd5b90 - 0x1dd5c08
void sub_01DD5B90_0x1dd5b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD5B90_0x1dd5b90");
#endif

    switch (ctx->pc) {
        case 0x1dd5bb0u: goto label_1dd5bb0;
        default: break;
    }

    ctx->pc = 0x1dd5b90u;

    // 0x1dd5b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd5b94: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd5b94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd5b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd5b9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd5b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd5ba0: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd5ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd5ba4: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd5ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd5ba8: 0xc775686  jal         func_1DD5A18
    ctx->pc = 0x1DD5BA8u;
    SET_GPR_U32(ctx, 31, 0x1DD5BB0u);
    ctx->pc = 0x1DD5BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5BA8u;
    // 0x1dd5bac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A18u, 0x1DD5BA8u, 0x1DD5BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5BB0u;
label_1dd5bb0:
    // 0x1dd5bb0: 0x8f8d8018  lw          $t5, -0x7FE8($gp)
    ctx->pc = 0x1dd5bb0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5bb4: 0x8dae00e0  lw          $t6, 0xE0($t5)
    ctx->pc = 0x1dd5bb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
    // 0x1dd5bb8: 0x8dcf0078  lw          $t7, 0x78($t6)
    ctx->pc = 0x1dd5bb8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 120)));
    // 0x1dd5bbc: 0x55f00009  bnel        $t7, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD5BBCu;
    {
        const bool branch_taken_0x1dd5bbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        if (branch_taken_0x1dd5bbc) {
            ctx->pc = 0x1DD5BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD5BBCu;
            // 0x1dd5bc0: 0x8c4e0010  lw          $t6, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD5BE4u;
            goto label_1dd5be4;
        }
    }
    ctx->pc = 0x1DD5BC4u;
    // 0x1dd5bc4: 0x8dce007c  lw          $t6, 0x7C($t6)
    ctx->pc = 0x1dd5bc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 124)));
    // 0x1dd5bc8: 0x240f0151  addiu       $t7, $zero, 0x151
    ctx->pc = 0x1dd5bc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
    // 0x1dd5bcc: 0x55cf0005  bnel        $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD5BCCu;
    {
        const bool branch_taken_0x1dd5bcc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dd5bcc) {
            ctx->pc = 0x1DD5BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD5BCCu;
            // 0x1dd5bd0: 0x8c4e0010  lw          $t6, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD5BE4u;
            goto label_1dd5be4;
        }
    }
    ctx->pc = 0x1DD5BD4u;
    // 0x1dd5bd4: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1dd5bd4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dd5bd8: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1dd5bd8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1dd5bdc: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1dd5bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dd5be0: 0x8c4e0010  lw          $t6, 0x10($v0)
    ctx->pc = 0x1dd5be0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1dd5be4:
    // 0x1dd5be4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd5be4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd5be8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD5BE8u;
    {
        const bool branch_taken_0x1dd5be8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DD5BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5BE8u;
        // 0x1dd5bec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5be8) {
            ctx->pc = 0x1DD5BFCu;
            goto label_1dd5bfc;
        }
    }
    ctx->pc = 0x1DD5BF0u;
    // 0x1dd5bf0: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1dd5bf0u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dd5bf4: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x1dd5bf4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x1dd5bf8: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1dd5bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dd5bfc:
    // 0x1dd5bfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd5bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd5c00: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD5C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5C00u;
        // 0x1dd5c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD5C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD5C08u;
}
