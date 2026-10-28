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

// Function: sub_01DD99F0
// Address: 0x1dd99f0 - 0x1dd9aa0
void sub_01DD99F0_0x1dd99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD99F0_0x1dd99f0");
#endif

    switch (ctx->pc) {
        case 0x1dd9a0cu: goto label_1dd9a0c;
        case 0x1dd9a20u: goto label_1dd9a20;
        case 0x1dd9a30u: goto label_1dd9a30;
        default: break;
    }

    ctx->pc = 0x1dd99f0u;

    // 0x1dd99f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd99f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd99f4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd99f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd99f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd99f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd99fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd99fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd9a00: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd9a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd9a04: 0xc776586  jal         func_1DD9618
    ctx->pc = 0x1DD9A04u;
    SET_GPR_U32(ctx, 31, 0x1DD9A0Cu);
    ctx->pc = 0x1DD9A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9A04u;
    // 0x1dd9a08: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9618u, 0x1DD9A04u, 0x1DD9A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9A0Cu;
label_1dd9a0c:
    // 0x1dd9a0c: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd9a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd9a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9a14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd9a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9a18: 0xc776594  jal         func_1DD9650
    ctx->pc = 0x1DD9A18u;
    SET_GPR_U32(ctx, 31, 0x1DD9A20u);
    ctx->pc = 0x1DD9A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9A18u;
    // 0x1dd9a1c: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9650u, 0x1DD9A18u, 0x1DD9A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9A20u;
label_1dd9a20:
    // 0x1dd9a20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DD9A20u;
    {
        const bool branch_taken_0x1dd9a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9A20u;
        // 0x1dd9a24: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9a20) {
            ctx->pc = 0x1DD9A64u;
            goto label_1dd9a64;
        }
    }
    ctx->pc = 0x1DD9A28u;
    // 0x1dd9a28: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9a2c: 0xa08f0428  sb          $t7, 0x428($a0)
    ctx->pc = 0x1dd9a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1064), (uint8_t)GPR_U32(ctx, 15));
label_1dd9a30:
    // 0x1dd9a30: 0x8c8d00dc  lw          $t5, 0xDC($a0)
    ctx->pc = 0x1dd9a30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1dd9a34: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1dd9a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd9a38: 0x8e0e081c  lw          $t6, 0x81C($s0)
    ctx->pc = 0x1dd9a38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1dd9a3c: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd9a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd9a40: 0x8daf08dc  lw          $t7, 0x8DC($t5)
    ctx->pc = 0x1dd9a40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 2268)));
    // 0x1dd9a44: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd9a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd9a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd9a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9a4c: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd9a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd9a50: 0xaf8e8020  sw          $t6, -0x7FE0($gp)
    ctx->pc = 0x1dd9a50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 14));
    // 0x1dd9a54: 0xaf8f8024  sw          $t7, -0x7FDC($gp)
    ctx->pc = 0x1dd9a54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934564), GPR_U32(ctx, 15));
    // 0x1dd9a58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd9a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd9a5c: 0x877659a  j           func_1DD9668
    ctx->pc = 0x1DD9A5Cu;
    ctx->pc = 0x1DD9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9A5Cu;
    // 0x1dd9a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9668u;
    sub_01DD9668_0x1dd9668(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD9A64u;
label_1dd9a64:
    // 0x1dd9a64: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x1DD9A64u;
    {
        const bool branch_taken_0x1dd9a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9A64u;
        // 0x1dd9a68: 0x8f848018  lw          $a0, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9a64) {
            ctx->pc = 0x1DD9A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd9a30;
        }
    }
    ctx->pc = 0x1DD9A6Cu;
    // 0x1dd9a6c: 0x0  nop
    ctx->pc = 0x1dd9a6cu;
    // NOP
    // 0x1dd9a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd9a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd9a74: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1dd9a74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd9a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd9a7c: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dd9a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dd9a80: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x1dd9a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9a84: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd9a84u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd9a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd9a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9a8c: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x1dd9a8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x1dd9a90: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd9a90u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dd9a94: 0x8776598  j           func_1DD9660
    ctx->pc = 0x1DD9A94u;
    ctx->pc = 0x1DD9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9A94u;
    // 0x1dd9a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9660u;
    sub_01DD9660_0x1dd9660(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD9A9Cu;
    // 0x1dd9a9c: 0x0  nop
    ctx->pc = 0x1dd9a9cu;
    // NOP
    ctx->pc = 0x1dd9aa0u;
}
