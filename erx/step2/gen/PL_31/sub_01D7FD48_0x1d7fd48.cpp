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

// Function: sub_01D7FD48
// Address: 0x1d7fd48 - 0x1d7fdb0
void sub_01D7FD48_0x1d7fd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7FD48_0x1d7fd48");
#endif

    switch (ctx->pc) {
        case 0x1d7fd64u: goto label_1d7fd64;
        case 0x1d7fd74u: goto label_1d7fd74;
        case 0x1d7fd80u: goto label_1d7fd80;
        case 0x1d7fd90u: goto label_1d7fd90;
        default: break;
    }

    ctx->pc = 0x1d7fd48u;

    // 0x1d7fd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7fd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7fd4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7fd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7fd50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7fd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7fd54: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7fd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7fd58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7fd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fd5c: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7FD5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7FD64u);
    ctx->pc = 0x1D7FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FD5Cu;
    // 0x1d7fd60: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7FD5Cu, 0x1D7FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FD64u;
label_1d7fd64:
    // 0x1d7fd64: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d7fd64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d7fd68: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d7fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d7fd6c: 0xc75f88a  jal         func_1D7E228
    ctx->pc = 0x1D7FD6Cu;
    SET_GPR_U32(ctx, 31, 0x1D7FD74u);
    ctx->pc = 0x1D7FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FD6Cu;
    // 0x1d7fd70: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7E228u, 0x1D7FD6Cu, 0x1D7FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FD74u;
label_1d7fd74:
    // 0x1d7fd74: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7fd78: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7FD78u;
    SET_GPR_U32(ctx, 31, 0x1D7FD80u);
    ctx->pc = 0x1D7FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FD78u;
    // 0x1d7fd7c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7FD78u, 0x1D7FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FD80u;
label_1d7fd80:
    // 0x1d7fd80: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d7fd80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d7fd84: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d7fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d7fd88: 0xc75f88a  jal         func_1D7E228
    ctx->pc = 0x1D7FD88u;
    SET_GPR_U32(ctx, 31, 0x1D7FD90u);
    ctx->pc = 0x1D7FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FD88u;
    // 0x1d7fd8c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7E228u, 0x1D7FD88u, 0x1D7FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FD90u;
label_1d7fd90:
    // 0x1d7fd90: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d7fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d7fd94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7fd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fd98: 0x3c0501d8  lui         $a1, 0x1D8
    ctx->pc = 0x1d7fd98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)472 << 16));
    // 0x1d7fd9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7fd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7fda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7fda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7fda4: 0x24a50c90  addiu       $a1, $a1, 0xC90
    ctx->pc = 0x1d7fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3216));
    // 0x1d7fda8: 0x875f5ea  j           func_1D7D7A8
    ctx->pc = 0x1D7FDA8u;
    ctx->pc = 0x1D7FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FDA8u;
    // 0x1d7fdac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D7A8u;
    sub_01D7D7A8_0x1d7d7a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7FDB0u;
}
