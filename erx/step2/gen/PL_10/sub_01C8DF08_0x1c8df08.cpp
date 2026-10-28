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

// Function: sub_01C8DF08
// Address: 0x1c8df08 - 0x1c8df78
void sub_01C8DF08_0x1c8df08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8DF08_0x1c8df08");
#endif

    switch (ctx->pc) {
        case 0x1c8df2cu: goto label_1c8df2c;
        case 0x1c8df3cu: goto label_1c8df3c;
        case 0x1c8df48u: goto label_1c8df48;
        case 0x1c8df58u: goto label_1c8df58;
        default: break;
    }

    ctx->pc = 0x1c8df08u;

    // 0x1c8df08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8df08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8df0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8df10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8df10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8df14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8df18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c8df18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8df1c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8df20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8df20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8df24: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DF24u;
    SET_GPR_U32(ctx, 31, 0x1C8DF2Cu);
    ctx->pc = 0x1C8DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DF24u;
    // 0x1c8df28: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DF24u, 0x1C8DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DF2Cu;
label_1c8df2c:
    // 0x1c8df2c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c8df2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c8df30: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c8df30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c8df34: 0xc723688  jal         func_1C8DA20
    ctx->pc = 0x1C8DF34u;
    SET_GPR_U32(ctx, 31, 0x1C8DF3Cu);
    ctx->pc = 0x1C8DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DF34u;
    // 0x1c8df38: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DA20u, 0x1C8DF34u, 0x1C8DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DF3Cu;
label_1c8df3c:
    // 0x1c8df3c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c8df3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c8df40: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DF40u;
    SET_GPR_U32(ctx, 31, 0x1C8DF48u);
    ctx->pc = 0x1C8DF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DF40u;
    // 0x1c8df44: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DF40u, 0x1C8DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DF48u;
label_1c8df48:
    // 0x1c8df48: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c8df48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c8df4c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c8df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c8df50: 0xc723688  jal         func_1C8DA20
    ctx->pc = 0x1C8DF50u;
    SET_GPR_U32(ctx, 31, 0x1C8DF58u);
    ctx->pc = 0x1C8DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DF50u;
    // 0x1c8df54: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DA20u, 0x1C8DF50u, 0x1C8DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DF58u;
label_1c8df58:
    // 0x1c8df58: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c8df58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c8df5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8df5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8df60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c8df60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8df64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8df64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8df68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8df68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8df6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8df6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8df70: 0x87233ea  j           func_1C8CFA8
    ctx->pc = 0x1C8DF70u;
    ctx->pc = 0x1C8DF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DF70u;
    // 0x1c8df74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CFA8u;
    sub_01C8CFA8_0x1c8cfa8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8DF78u;
}
