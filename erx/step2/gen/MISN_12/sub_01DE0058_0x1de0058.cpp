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

// Function: sub_01DE0058
// Address: 0x1de0058 - 0x1de00f0
void sub_01DE0058_0x1de0058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0058_0x1de0058");
#endif

    switch (ctx->pc) {
        case 0x1de0078u: goto label_1de0078;
        case 0x1de00c4u: goto label_1de00c4;
        default: break;
    }

    ctx->pc = 0x1de0058u;

    // 0x1de0058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de0058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de005c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de005cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de0060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de0060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de0064: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1de0064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1de0068: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de0068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de006c: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1de006cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de0070: 0xc778006  jal         func_1DE0018
    ctx->pc = 0x1DE0070u;
    SET_GPR_U32(ctx, 31, 0x1DE0078u);
    ctx->pc = 0x1DE0074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0070u;
    // 0x1de0074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0018u, 0x1DE0070u, 0x1DE0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE0078u;
label_1de0078:
    // 0x1de0078: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1de0078u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1de007c: 0x240f015c  addiu       $t7, $zero, 0x15C
    ctx->pc = 0x1de007cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
    // 0x1de0080: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE0080u;
    {
        const bool branch_taken_0x1de0080 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DE0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0080u;
        // 0x1de0084: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0080) {
            ctx->pc = 0x1DE0094u;
            goto label_1de0094;
        }
    }
    ctx->pc = 0x1DE0088u;
    // 0x1de0088: 0x948f056e  lhu         $t7, 0x56E($a0)
    ctx->pc = 0x1de0088u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1390)));
    // 0x1de008c: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x1de008cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x1de0090: 0xa48f056e  sh          $t7, 0x56E($a0)
    ctx->pc = 0x1de0090u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de0094:
    // 0x1de0094: 0x8c8e00e0  lw          $t6, 0xE0($a0)
    ctx->pc = 0x1de0094u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1de0098: 0x8dcf0078  lw          $t7, 0x78($t6)
    ctx->pc = 0x1de0098u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 120)));
    // 0x1de009c: 0x15f00007  bne         $t7, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE009Cu;
    {
        const bool branch_taken_0x1de009c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DE00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE009Cu;
        // 0x1de00a0: 0x240f0153  addiu       $t7, $zero, 0x153 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 339));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de009c) {
            ctx->pc = 0x1DE00BCu;
            goto label_1de00bc;
        }
    }
    ctx->pc = 0x1DE00A4u;
    // 0x1de00a4: 0x8dce007c  lw          $t6, 0x7C($t6)
    ctx->pc = 0x1de00a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 124)));
    // 0x1de00a8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE00A8u;
    {
        const bool branch_taken_0x1de00a8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1de00a8) {
            ctx->pc = 0x1DE00BCu;
            goto label_1de00bc;
        }
    }
    ctx->pc = 0x1DE00B0u;
    // 0x1de00b0: 0x948f056e  lhu         $t7, 0x56E($a0)
    ctx->pc = 0x1de00b0u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1390)));
    // 0x1de00b4: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1de00b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1de00b8: 0xa48f056e  sh          $t7, 0x56E($a0)
    ctx->pc = 0x1de00b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de00bc:
    // 0x1de00bc: 0xc77800c  jal         func_1DE0030
    ctx->pc = 0x1DE00BCu;
    SET_GPR_U32(ctx, 31, 0x1DE00C4u);
    ctx->pc = 0x1DE00C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE00BCu;
    // 0x1de00c0: 0x8c9000dc  lw          $s0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0030u, 0x1DE00BCu, 0x1DE00C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE00C4u;
label_1de00c4:
    // 0x1de00c4: 0xae020cd8  sw          $v0, 0xCD8($s0)
    ctx->pc = 0x1de00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3288), GPR_U32(ctx, 2));
    // 0x1de00c8: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1de00c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de00cc: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de00ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de00d0: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1de00d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de00d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de00d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de00d8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de00d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de00dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1de00dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de00e0: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de00e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de00e4: 0x877800a  j           func_1DE0028
    ctx->pc = 0x1DE00E4u;
    ctx->pc = 0x1DE00E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE00E4u;
    // 0x1de00e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0028u;
    sub_01DE0028_0x1de0028(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE00ECu;
    // 0x1de00ec: 0x0  nop
    ctx->pc = 0x1de00ecu;
    // NOP
    ctx->pc = 0x1de00f0u;
}
