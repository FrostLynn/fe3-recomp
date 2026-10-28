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

// Function: sub_01DD9AA0
// Address: 0x1dd9aa0 - 0x1dd9b28
void sub_01DD9AA0_0x1dd9aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9AA0_0x1dd9aa0");
#endif

    switch (ctx->pc) {
        case 0x1dd9abcu: goto label_1dd9abc;
        case 0x1dd9ad0u: goto label_1dd9ad0;
        case 0x1dd9ae0u: goto label_1dd9ae0;
        default: break;
    }

    ctx->pc = 0x1dd9aa0u;

    // 0x1dd9aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd9aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd9aa4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9aa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd9aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd9aac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd9aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd9ab0: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd9ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd9ab4: 0xc776586  jal         func_1DD9618
    ctx->pc = 0x1DD9AB4u;
    SET_GPR_U32(ctx, 31, 0x1DD9ABCu);
    ctx->pc = 0x1DD9AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9AB4u;
    // 0x1dd9ab8: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9618u, 0x1DD9AB4u, 0x1DD9ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9ABCu;
label_1dd9abc:
    // 0x1dd9abc: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd9abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9ac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd9ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9ac4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd9ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9ac8: 0xc776594  jal         func_1DD9650
    ctx->pc = 0x1DD9AC8u;
    SET_GPR_U32(ctx, 31, 0x1DD9AD0u);
    ctx->pc = 0x1DD9ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9AC8u;
    // 0x1dd9acc: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9650u, 0x1DD9AC8u, 0x1DD9AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9AD0u;
label_1dd9ad0:
    // 0x1dd9ad0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD9AD0u;
    {
        const bool branch_taken_0x1dd9ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9AD0u;
        // 0x1dd9ad4: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9ad0) {
            ctx->pc = 0x1DD9B14u;
            goto label_1dd9b14;
        }
    }
    ctx->pc = 0x1DD9AD8u;
    // 0x1dd9ad8: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd9ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9adc: 0xa08f0428  sb          $t7, 0x428($a0)
    ctx->pc = 0x1dd9adcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1064), (uint8_t)GPR_U32(ctx, 15));
label_1dd9ae0:
    // 0x1dd9ae0: 0x8c8d00dc  lw          $t5, 0xDC($a0)
    ctx->pc = 0x1dd9ae0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1dd9ae4: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1dd9ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd9ae8: 0x8e0e081c  lw          $t6, 0x81C($s0)
    ctx->pc = 0x1dd9ae8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1dd9aec: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd9aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd9af0: 0x8daf08dc  lw          $t7, 0x8DC($t5)
    ctx->pc = 0x1dd9af0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 2268)));
    // 0x1dd9af4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd9af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd9af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd9af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9afc: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd9afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd9b00: 0xaf8e8020  sw          $t6, -0x7FE0($gp)
    ctx->pc = 0x1dd9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 14));
    // 0x1dd9b04: 0xaf8f8024  sw          $t7, -0x7FDC($gp)
    ctx->pc = 0x1dd9b04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934564), GPR_U32(ctx, 15));
    // 0x1dd9b08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd9b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd9b0c: 0x877659a  j           func_1DD9668
    ctx->pc = 0x1DD9B0Cu;
    ctx->pc = 0x1DD9B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9B0Cu;
    // 0x1dd9b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9668u;
    sub_01DD9668_0x1dd9668(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD9B14u;
label_1dd9b14:
    // 0x1dd9b14: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1DD9B14u;
    {
        const bool branch_taken_0x1dd9b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9B14u;
        // 0x1dd9b18: 0x8f848018  lw          $a0, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9b14) {
            ctx->pc = 0x1DD9AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd9ae0;
        }
    }
    ctx->pc = 0x1DD9B1Cu;
    // 0x1dd9b1c: 0x0  nop
    ctx->pc = 0x1dd9b1cu;
    // NOP
    // 0x1dd9b20: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9B20u;
        // 0x1dd9b24: 0xaf80801c  sw          $zero, -0x7FE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9B28u;
}
