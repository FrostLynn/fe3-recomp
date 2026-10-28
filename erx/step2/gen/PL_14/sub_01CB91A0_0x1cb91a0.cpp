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

// Function: sub_01CB91A0
// Address: 0x1cb91a0 - 0x1cb9208
void sub_01CB91A0_0x1cb91a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB91A0_0x1cb91a0");
#endif

    switch (ctx->pc) {
        case 0x1cb91bcu: goto label_1cb91bc;
        case 0x1cb91ccu: goto label_1cb91cc;
        case 0x1cb91d8u: goto label_1cb91d8;
        case 0x1cb91e8u: goto label_1cb91e8;
        default: break;
    }

    ctx->pc = 0x1cb91a0u;

    // 0x1cb91a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb91a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb91a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb91a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb91a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb91a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb91ac: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb91acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb91b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb91b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb91b4: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB91B4u;
    SET_GPR_U32(ctx, 31, 0x1CB91BCu);
    ctx->pc = 0x1CB91B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB91B4u;
    // 0x1cb91b8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB91B4u, 0x1CB91BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB91BCu;
label_1cb91bc:
    // 0x1cb91bc: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cb91bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cb91c0: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cb91c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cb91c4: 0xc72dc86  jal         func_1CB7218
    ctx->pc = 0x1CB91C4u;
    SET_GPR_U32(ctx, 31, 0x1CB91CCu);
    ctx->pc = 0x1CB91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB91C4u;
    // 0x1cb91c8: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB7218u, 0x1CB91C4u, 0x1CB91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB91CCu;
label_1cb91cc:
    // 0x1cb91cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cb91ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb91d0: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB91D0u;
    SET_GPR_U32(ctx, 31, 0x1CB91D8u);
    ctx->pc = 0x1CB91D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB91D0u;
    // 0x1cb91d4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB91D0u, 0x1CB91D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB91D8u;
label_1cb91d8:
    // 0x1cb91d8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cb91d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cb91dc: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cb91dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cb91e0: 0xc72dc86  jal         func_1CB7218
    ctx->pc = 0x1CB91E0u;
    SET_GPR_U32(ctx, 31, 0x1CB91E8u);
    ctx->pc = 0x1CB91E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB91E0u;
    // 0x1cb91e4: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB7218u, 0x1CB91E0u, 0x1CB91E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB91E8u;
label_1cb91e8:
    // 0x1cb91e8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cb91e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cb91ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb91ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb91f0: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x1cb91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x1cb91f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb91f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb91f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb91f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb91fc: 0x24a5a060  addiu       $a1, $a1, -0x5FA0
    ctx->pc = 0x1cb91fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942816));
    // 0x1cb9200: 0x872d9ea  j           func_1CB67A8
    ctx->pc = 0x1CB9200u;
    ctx->pc = 0x1CB9204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9200u;
    // 0x1cb9204: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB67A8u;
    sub_01CB67A8_0x1cb67a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB9208u;
}
