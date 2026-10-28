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

// Function: sub_01C50960
// Address: 0x1c50960 - 0x1c509d0
void sub_01C50960_0x1c50960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50960_0x1c50960");
#endif

    switch (ctx->pc) {
        case 0x1c50984u: goto label_1c50984;
        case 0x1c50994u: goto label_1c50994;
        case 0x1c509a0u: goto label_1c509a0;
        case 0x1c509b0u: goto label_1c509b0;
        default: break;
    }

    ctx->pc = 0x1c50960u;

    // 0x1c50960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c50960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c50964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c50964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c50968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c50968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5096c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5096cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50970: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c50970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50974: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c50974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c50978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c50978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5097c: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C5097Cu;
    SET_GPR_U32(ctx, 31, 0x1C50984u);
    ctx->pc = 0x1C50980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5097Cu;
    // 0x1c50980: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C5097Cu, 0x1C50984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50984u;
label_1c50984:
    // 0x1c50984: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c50984u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c50988: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c50988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c5098c: 0xc71411e  jal         func_1C50478
    ctx->pc = 0x1C5098Cu;
    SET_GPR_U32(ctx, 31, 0x1C50994u);
    ctx->pc = 0x1C50990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5098Cu;
    // 0x1c50990: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50478u, 0x1C5098Cu, 0x1C50994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50994u;
label_1c50994:
    // 0x1c50994: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c50994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c50998: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C50998u;
    SET_GPR_U32(ctx, 31, 0x1C509A0u);
    ctx->pc = 0x1C5099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50998u;
    // 0x1c5099c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C50998u, 0x1C509A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C509A0u;
label_1c509a0:
    // 0x1c509a0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c509a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c509a4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c509a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c509a8: 0xc71411e  jal         func_1C50478
    ctx->pc = 0x1C509A8u;
    SET_GPR_U32(ctx, 31, 0x1C509B0u);
    ctx->pc = 0x1C509ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C509A8u;
    // 0x1c509ac: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50478u, 0x1C509A8u, 0x1C509B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C509B0u;
label_1c509b0:
    // 0x1c509b0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c509b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c509b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c509b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c509b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c509b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c509bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c509bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c509c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c509c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c509c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c509c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c509c8: 0x8713e76  j           func_1C4F9D8
    ctx->pc = 0x1C509C8u;
    ctx->pc = 0x1C509CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C509C8u;
    // 0x1c509cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9D8u;
    sub_01C4F9D8_0x1c4f9d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C509D0u;
}
