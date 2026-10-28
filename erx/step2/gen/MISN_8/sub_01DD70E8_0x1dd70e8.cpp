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

// Function: sub_01DD70E8
// Address: 0x1dd70e8 - 0x1dd7158
void sub_01DD70E8_0x1dd70e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD70E8_0x1dd70e8");
#endif

    switch (ctx->pc) {
        case 0x1dd7100u: goto label_1dd7100;
        case 0x1dd7134u: goto label_1dd7134;
        default: break;
    }

    ctx->pc = 0x1dd70e8u;

    // 0x1dd70e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd70e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd70ec: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd70ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd70f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd70f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd70f4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd70f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd70f8: 0xc775b0a  jal         func_1DD6C28
    ctx->pc = 0x1DD70F8u;
    SET_GPR_U32(ctx, 31, 0x1DD7100u);
    ctx->pc = 0x1DD70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD70F8u;
    // 0x1dd70fc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C28u, 0x1DD70F8u, 0x1DD7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7100u;
label_1dd7100:
    // 0x1dd7100: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dd7100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dd7104: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd7104u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd7108: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD7108u;
    {
        const bool branch_taken_0x1dd7108 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7108u;
        // 0x1dd710c: 0x248479b8  addiu       $a0, $a0, 0x79B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7108) {
            ctx->pc = 0x1DD712Cu;
            goto label_1dd712c;
        }
    }
    ctx->pc = 0x1DD7110u;
    // 0x1dd7110: 0x904f09b0  lbu         $t7, 0x9B0($v0)
    ctx->pc = 0x1dd7110u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2480)));
    // 0x1dd7114: 0x51e00004  beql        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD7114u;
    {
        const bool branch_taken_0x1dd7114 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd7114) {
            ctx->pc = 0x1DD7118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD7114u;
            // 0x1dd7118: 0x8c4f024c  lw          $t7, 0x24C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD7128u;
            goto label_1dd7128;
        }
    }
    ctx->pc = 0x1DD711Cu;
    // 0x1dd711c: 0xa04009b0  sb          $zero, 0x9B0($v0)
    ctx->pc = 0x1dd711cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd7120: 0xa040040d  sb          $zero, 0x40D($v0)
    ctx->pc = 0x1dd7120u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1037), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd7124: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dd7124u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
label_1dd7128:
    // 0x1dd7128: 0xade04604  sw          $zero, 0x4604($t7)
    ctx->pc = 0x1dd7128u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17924), GPR_U32(ctx, 0));
label_1dd712c:
    // 0x1dd712c: 0xc775b26  jal         func_1DD6C98
    ctx->pc = 0x1DD712Cu;
    SET_GPR_U32(ctx, 31, 0x1DD7134u);
    ctx->pc = 0x1DD6C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C98u, 0x1DD712Cu, 0x1DD7134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD7134u;
label_1dd7134:
    // 0x1dd7134: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x1dd7134u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd7138: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD7138u;
    {
        const bool branch_taken_0x1dd7138 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7138u;
        // 0x1dd713c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7138) {
            ctx->pc = 0x1DD7148u;
            goto label_1dd7148;
        }
    }
    ctx->pc = 0x1DD7140u;
    // 0x1dd7140: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd7140u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd7144: 0xa1e0042a  sb          $zero, 0x42A($t7)
    ctx->pc = 0x1dd7144u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1066), (uint8_t)GPR_U32(ctx, 0));
label_1dd7148:
    // 0x1dd7148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd7148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd714c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD714Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD714Cu;
        // 0x1dd7150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD714Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD7154u;
    // 0x1dd7154: 0x0  nop
    ctx->pc = 0x1dd7154u;
    // NOP
    ctx->pc = 0x1dd7158u;
}
