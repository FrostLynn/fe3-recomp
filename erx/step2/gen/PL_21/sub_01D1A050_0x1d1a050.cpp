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

// Function: sub_01D1A050
// Address: 0x1d1a050 - 0x1d1a0c0
void sub_01D1A050_0x1d1a050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1A050_0x1d1a050");
#endif

    switch (ctx->pc) {
        case 0x1d1a074u: goto label_1d1a074;
        case 0x1d1a084u: goto label_1d1a084;
        case 0x1d1a090u: goto label_1d1a090;
        case 0x1d1a0a0u: goto label_1d1a0a0;
        default: break;
    }

    ctx->pc = 0x1d1a050u;

    // 0x1d1a050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1a054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1a058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1a05c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1a060: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d1a060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a064: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1a064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1a068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1a068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a06c: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1A06Cu;
    SET_GPR_U32(ctx, 31, 0x1D1A074u);
    ctx->pc = 0x1D1A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A06Cu;
    // 0x1d1a070: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1A06Cu, 0x1D1A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A074u;
label_1d1a074:
    // 0x1d1a074: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d1a074u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d1a078: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d1a078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d1a07c: 0xc7466d8  jal         func_1D19B60
    ctx->pc = 0x1D1A07Cu;
    SET_GPR_U32(ctx, 31, 0x1D1A084u);
    ctx->pc = 0x1D1A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A07Cu;
    // 0x1d1a080: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B60u, 0x1D1A07Cu, 0x1D1A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A084u;
label_1d1a084:
    // 0x1d1a084: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d1a084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1a088: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1A088u;
    SET_GPR_U32(ctx, 31, 0x1D1A090u);
    ctx->pc = 0x1D1A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A088u;
    // 0x1d1a08c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1A088u, 0x1D1A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A090u;
label_1d1a090:
    // 0x1d1a090: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d1a090u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d1a094: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d1a094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d1a098: 0xc7466d8  jal         func_1D19B60
    ctx->pc = 0x1D1A098u;
    SET_GPR_U32(ctx, 31, 0x1D1A0A0u);
    ctx->pc = 0x1D1A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A098u;
    // 0x1d1a09c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B60u, 0x1D1A098u, 0x1D1A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A0A0u;
label_1d1a0a0:
    // 0x1d1a0a0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d1a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d1a0a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1a0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a0a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d1a0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a0ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1a0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1a0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1a0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1a0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1a0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1a0b8: 0x874642e  j           func_1D190B8
    ctx->pc = 0x1D1A0B8u;
    ctx->pc = 0x1D1A0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A0B8u;
    // 0x1d1a0bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190B8u;
    sub_01D190B8_0x1d190b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1A0C0u;
}
