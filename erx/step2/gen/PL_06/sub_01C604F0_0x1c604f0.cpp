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

// Function: sub_01C604F0
// Address: 0x1c604f0 - 0x1c60560
void sub_01C604F0_0x1c604f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C604F0_0x1c604f0");
#endif

    switch (ctx->pc) {
        case 0x1c60514u: goto label_1c60514;
        case 0x1c60524u: goto label_1c60524;
        case 0x1c60530u: goto label_1c60530;
        case 0x1c60540u: goto label_1c60540;
        default: break;
    }

    ctx->pc = 0x1c604f0u;

    // 0x1c604f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c604f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c604f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c604f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c604f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c604f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c604fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c604fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60500: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c60500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60504: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c60504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c60508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c60508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6050c: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C6050Cu;
    SET_GPR_U32(ctx, 31, 0x1C60514u);
    ctx->pc = 0x1C60510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6050Cu;
    // 0x1c60510: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C6050Cu, 0x1C60514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60514u;
label_1c60514:
    // 0x1c60514: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c60514u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c60518: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c60518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c6051c: 0xc718002  jal         func_1C60008
    ctx->pc = 0x1C6051Cu;
    SET_GPR_U32(ctx, 31, 0x1C60524u);
    ctx->pc = 0x1C60520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6051Cu;
    // 0x1c60520: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C60008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C60008u, 0x1C6051Cu, 0x1C60524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60524u;
label_1c60524:
    // 0x1c60524: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c60524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c60528: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C60528u;
    SET_GPR_U32(ctx, 31, 0x1C60530u);
    ctx->pc = 0x1C6052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60528u;
    // 0x1c6052c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C60528u, 0x1C60530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60530u;
label_1c60530:
    // 0x1c60530: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c60530u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c60534: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c60534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c60538: 0xc718002  jal         func_1C60008
    ctx->pc = 0x1C60538u;
    SET_GPR_U32(ctx, 31, 0x1C60540u);
    ctx->pc = 0x1C6053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60538u;
    // 0x1c6053c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C60008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C60008u, 0x1C60538u, 0x1C60540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60540u;
label_1c60540:
    // 0x1c60540: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c60540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c60544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c60544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60548: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c60548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6054c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6054cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c60550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c60550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60554: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c60554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c60558: 0x8717d6a  j           func_1C5F5A8
    ctx->pc = 0x1C60558u;
    ctx->pc = 0x1C6055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60558u;
    // 0x1c6055c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F5A8u;
    sub_01C5F5A8_0x1c5f5a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C60560u;
}
