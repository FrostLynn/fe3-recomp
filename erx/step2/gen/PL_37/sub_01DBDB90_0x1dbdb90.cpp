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

// Function: sub_01DBDB90
// Address: 0x1dbdb90 - 0x1dbdbf8
void sub_01DBDB90_0x1dbdb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDB90_0x1dbdb90");
#endif

    switch (ctx->pc) {
        case 0x1dbdbacu: goto label_1dbdbac;
        case 0x1dbdbbcu: goto label_1dbdbbc;
        case 0x1dbdbc8u: goto label_1dbdbc8;
        case 0x1dbdbd8u: goto label_1dbdbd8;
        default: break;
    }

    ctx->pc = 0x1dbdb90u;

    // 0x1dbdb90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbdb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbdb94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbdb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbdb98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbdb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbdb9c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbdb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbdba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbdba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdba4: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDBA4u;
    SET_GPR_U32(ctx, 31, 0x1DBDBACu);
    ctx->pc = 0x1DBDBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDBA4u;
    // 0x1dbdba8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDBA4u, 0x1DBDBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDBACu;
label_1dbdbac:
    // 0x1dbdbac: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dbdbacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1dbdbb0: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1dbdbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dbdbb4: 0xc76ef42  jal         func_1DBBD08
    ctx->pc = 0x1DBDBB4u;
    SET_GPR_U32(ctx, 31, 0x1DBDBBCu);
    ctx->pc = 0x1DBDBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDBB4u;
    // 0x1dbdbb8: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBD08u, 0x1DBDBB4u, 0x1DBDBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDBBCu;
label_1dbdbbc:
    // 0x1dbdbbc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbdbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbdbc0: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDBC0u;
    SET_GPR_U32(ctx, 31, 0x1DBDBC8u);
    ctx->pc = 0x1DBDBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDBC0u;
    // 0x1dbdbc4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDBC0u, 0x1DBDBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDBC8u;
label_1dbdbc8:
    // 0x1dbdbc8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dbdbc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1dbdbcc: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1dbdbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dbdbd0: 0xc76ef42  jal         func_1DBBD08
    ctx->pc = 0x1DBDBD0u;
    SET_GPR_U32(ctx, 31, 0x1DBDBD8u);
    ctx->pc = 0x1DBDBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDBD0u;
    // 0x1dbdbd4: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBD08u, 0x1DBDBD0u, 0x1DBDBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDBD8u;
label_1dbdbd8:
    // 0x1dbdbd8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1dbdbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1dbdbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbdbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdbe0: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x1dbdbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x1dbdbe4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbdbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbdbe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbdbe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbdbec: 0x24a5f2b0  addiu       $a1, $a1, -0xD50
    ctx->pc = 0x1dbdbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963888));
    // 0x1dbdbf0: 0x876ee6c  j           func_1DBB9B0
    ctx->pc = 0x1DBDBF0u;
    ctx->pc = 0x1DBDBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDBF0u;
    // 0x1dbdbf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB9B0u;
    sub_01DBB9B0_0x1dbb9b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBDBF8u;
}
