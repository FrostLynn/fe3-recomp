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

// Function: sub_01C8F558
// Address: 0x1c8f558 - 0x1c8f5c0
void sub_01C8F558_0x1c8f558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F558_0x1c8f558");
#endif

    switch (ctx->pc) {
        case 0x1c8f574u: goto label_1c8f574;
        case 0x1c8f584u: goto label_1c8f584;
        case 0x1c8f590u: goto label_1c8f590;
        case 0x1c8f5a0u: goto label_1c8f5a0;
        default: break;
    }

    ctx->pc = 0x1c8f558u;

    // 0x1c8f558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8f558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8f55c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8f560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8f560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8f564: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8f564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8f568: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8f568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f56c: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8F56Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F574u);
    ctx->pc = 0x1C8F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F56Cu;
    // 0x1c8f570: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8F56Cu, 0x1C8F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F574u;
label_1c8f574:
    // 0x1c8f574: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c8f574u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c8f578: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c8f578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c8f57c: 0xc723688  jal         func_1C8DA20
    ctx->pc = 0x1C8F57Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F584u);
    ctx->pc = 0x1C8F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F57Cu;
    // 0x1c8f580: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DA20u, 0x1C8F57Cu, 0x1C8F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F584u;
label_1c8f584:
    // 0x1c8f584: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c8f584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c8f588: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8F588u;
    SET_GPR_U32(ctx, 31, 0x1C8F590u);
    ctx->pc = 0x1C8F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F588u;
    // 0x1c8f58c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8F588u, 0x1C8F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F590u;
label_1c8f590:
    // 0x1c8f590: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c8f590u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c8f594: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c8f594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c8f598: 0xc723688  jal         func_1C8DA20
    ctx->pc = 0x1C8F598u;
    SET_GPR_U32(ctx, 31, 0x1C8F5A0u);
    ctx->pc = 0x1C8F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F598u;
    // 0x1c8f59c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8DA20u, 0x1C8F598u, 0x1C8F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F5A0u;
label_1c8f5a0:
    // 0x1c8f5a0: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c8f5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c8f5a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8f5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f5a8: 0x3c0501c9  lui         $a1, 0x1C9
    ctx->pc = 0x1c8f5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f5ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8f5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8f5b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8f5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f5b4: 0x24a50fd0  addiu       $a1, $a1, 0xFD0
    ctx->pc = 0x1c8f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4048));
    // 0x1c8f5b8: 0x87233ea  j           func_1C8CFA8
    ctx->pc = 0x1C8F5B8u;
    ctx->pc = 0x1C8F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F5B8u;
    // 0x1c8f5bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CFA8u;
    sub_01C8CFA8_0x1c8cfa8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8F5C0u;
}
