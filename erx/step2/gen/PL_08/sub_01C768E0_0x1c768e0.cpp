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

// Function: sub_01C768E0
// Address: 0x1c768e0 - 0x1c76950
void sub_01C768E0_0x1c768e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C768E0_0x1c768e0");
#endif

    switch (ctx->pc) {
        case 0x1c76904u: goto label_1c76904;
        case 0x1c76914u: goto label_1c76914;
        case 0x1c76920u: goto label_1c76920;
        case 0x1c76930u: goto label_1c76930;
        default: break;
    }

    ctx->pc = 0x1c768e0u;

    // 0x1c768e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c768e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c768e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c768e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c768e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c768e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c768ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c768ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c768f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c768f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c768f4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c768f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c768f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c768f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c768fc: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C768FCu;
    SET_GPR_U32(ctx, 31, 0x1C76904u);
    ctx->pc = 0x1C76900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C768FCu;
    // 0x1c76900: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C768FCu, 0x1C76904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76904u;
label_1c76904:
    // 0x1c76904: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c76904u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c76908: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c76908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c7690c: 0xc71d8fc  jal         func_1C763F0
    ctx->pc = 0x1C7690Cu;
    SET_GPR_U32(ctx, 31, 0x1C76914u);
    ctx->pc = 0x1C76910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7690Cu;
    // 0x1c76910: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C763F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C763F0u, 0x1C7690Cu, 0x1C76914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76914u;
label_1c76914:
    // 0x1c76914: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c76914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c76918: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C76918u;
    SET_GPR_U32(ctx, 31, 0x1C76920u);
    ctx->pc = 0x1C7691Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76918u;
    // 0x1c7691c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C76918u, 0x1C76920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76920u;
label_1c76920:
    // 0x1c76920: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c76920u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c76924: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c76924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c76928: 0xc71d8fc  jal         func_1C763F0
    ctx->pc = 0x1C76928u;
    SET_GPR_U32(ctx, 31, 0x1C76930u);
    ctx->pc = 0x1C7692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76928u;
    // 0x1c7692c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C763F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C763F0u, 0x1C76928u, 0x1C76930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76930u;
label_1c76930:
    // 0x1c76930: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c76930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c76934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76938: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c76938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7693c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c7693cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c76940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c76940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c76944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c76948: 0x871d66a  j           func_1C759A8
    ctx->pc = 0x1C76948u;
    ctx->pc = 0x1C7694Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76948u;
    // 0x1c7694c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C759A8u;
    sub_01C759A8_0x1c759a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C76950u;
}
