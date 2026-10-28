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

// Function: sub_01D344F8
// Address: 0x1d344f8 - 0x1d34568
void sub_01D344F8_0x1d344f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D344F8_0x1d344f8");
#endif

    switch (ctx->pc) {
        case 0x1d3451cu: goto label_1d3451c;
        case 0x1d3452cu: goto label_1d3452c;
        case 0x1d34538u: goto label_1d34538;
        case 0x1d34548u: goto label_1d34548;
        default: break;
    }

    ctx->pc = 0x1d344f8u;

    // 0x1d344f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d344f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d344fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d344fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d34500: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d34500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d34504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34508: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d34508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3450c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3450cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d34510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d34510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34514: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D34514u;
    SET_GPR_U32(ctx, 31, 0x1D3451Cu);
    ctx->pc = 0x1D34518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34514u;
    // 0x1d34518: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D34514u, 0x1D3451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3451Cu;
label_1d3451c:
    // 0x1d3451c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3451cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d34520: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d34520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d34524: 0xc74d004  jal         func_1D34010
    ctx->pc = 0x1D34524u;
    SET_GPR_U32(ctx, 31, 0x1D3452Cu);
    ctx->pc = 0x1D34528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34524u;
    // 0x1d34528: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34010u, 0x1D34524u, 0x1D3452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3452Cu;
label_1d3452c:
    // 0x1d3452c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3452cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d34530: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D34530u;
    SET_GPR_U32(ctx, 31, 0x1D34538u);
    ctx->pc = 0x1D34534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34530u;
    // 0x1d34534: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D34530u, 0x1D34538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34538u;
label_1d34538:
    // 0x1d34538: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d34538u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3453c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d3453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d34540: 0xc74d004  jal         func_1D34010
    ctx->pc = 0x1D34540u;
    SET_GPR_U32(ctx, 31, 0x1D34548u);
    ctx->pc = 0x1D34544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34540u;
    // 0x1d34544: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34010u, 0x1D34540u, 0x1D34548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34548u;
label_1d34548:
    // 0x1d34548: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d34548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d3454c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3454cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34550: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d34550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34554: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d34554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d34558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d34558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3455c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3455cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d34560: 0x874cd6a  j           func_1D335A8
    ctx->pc = 0x1D34560u;
    ctx->pc = 0x1D34564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34560u;
    // 0x1d34564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D335A8u;
    sub_01D335A8_0x1d335a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D34568u;
}
