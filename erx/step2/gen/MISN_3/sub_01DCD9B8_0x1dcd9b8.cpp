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

// Function: sub_01DCD9B8
// Address: 0x1dcd9b8 - 0x1dcda70
void sub_01DCD9B8_0x1dcd9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCD9B8_0x1dcd9b8");
#endif

    switch (ctx->pc) {
        case 0x1dcd9ecu: goto label_1dcd9ec;
        case 0x1dcda00u: goto label_1dcda00;
        case 0x1dcda18u: goto label_1dcda18;
        case 0x1dcda64u: goto label_1dcda64;
        default: break;
    }

    ctx->pc = 0x1dcd9b8u;

    // 0x1dcd9b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dcd9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dcd9bc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcd9bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcd9c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dcd9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dcd9c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcd9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcd9c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dcd9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dcd9cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dcd9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd9d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dcd9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dcd9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcd9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcd9d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dcd9d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd9dc: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcd9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcd9e0: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcd9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcd9e4: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCD9E4u;
    SET_GPR_U32(ctx, 31, 0x1DCD9ECu);
    ctx->pc = 0x1DCD9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD9E4u;
    // 0x1dcd9e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCD9E4u, 0x1DCD9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD9ECu;
label_1dcd9ec:
    // 0x1dcd9ec: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcd9ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcd9f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcd9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd9f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcd9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd9f8: 0xc77360e  jal         func_1DCD838
    ctx->pc = 0x1DCD9F8u;
    SET_GPR_U32(ctx, 31, 0x1DCDA00u);
    ctx->pc = 0x1DCD9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD9F8u;
    // 0x1dcd9fc: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD838u, 0x1DCD9F8u, 0x1DCDA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDA00u;
label_1dcda00:
    // 0x1dcda00: 0x8e2e0008  lw          $t6, 0x8($s1)
    ctx->pc = 0x1dcda00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dcda04: 0x240f001d  addiu       $t7, $zero, 0x1D
    ctx->pc = 0x1dcda04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1dcda08: 0x55cf000a  bnel        $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1DCDA08u;
    {
        const bool branch_taken_0x1dcda08 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dcda08) {
            ctx->pc = 0x1DCDA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCDA08u;
            // 0x1dcda0c: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCDA34u;
            goto label_1dcda34;
        }
    }
    ctx->pc = 0x1DCDA10u;
    // 0x1dcda10: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1dcda10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1dcda14: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1dcda14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1dcda18:
    // 0x1dcda18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcda18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcda1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcda1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcda20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dcda20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcda24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dcda24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcda28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dcda28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcda2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDA2Cu;
        // 0x1dcda30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDA34u;
label_1dcda34:
    // 0x1dcda34: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DCDA34u;
    {
        const bool branch_taken_0x1dcda34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDA34u;
        // 0x1dcda38: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcda34) {
            ctx->pc = 0x1DCDA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcda18;
        }
    }
    ctx->pc = 0x1DCDA3Cu;
    // 0x1dcda3c: 0x0  nop
    ctx->pc = 0x1dcda3cu;
    // NOP
    // 0x1dcda40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcda40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcda44: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcda44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcda48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcda48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcda4c: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dcda4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dcda50: 0x2484e230  addiu       $a0, $a0, -0x1DD0
    ctx->pc = 0x1dcda50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959664));
    // 0x1dcda54: 0x95ee056e  lhu         $t6, 0x56E($t7)
    ctx->pc = 0x1dcda54u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 1390)));
    // 0x1dcda58: 0x35ce0004  ori         $t6, $t6, 0x4
    ctx->pc = 0x1dcda58u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
    // 0x1dcda5c: 0xc773624  jal         func_1DCD890
    ctx->pc = 0x1DCDA5Cu;
    SET_GPR_U32(ctx, 31, 0x1DCDA64u);
    ctx->pc = 0x1DCDA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDA5Cu;
    // 0x1dcda60: 0xa5ee056e  sh          $t6, 0x56E($t7) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 15), 1390), (uint16_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD890u, 0x1DCDA5Cu, 0x1DCDA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDA64u;
label_1dcda64:
    // 0x1dcda64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcda64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcda68: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDA68u;
        // 0x1dcda6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDA70u;
}
