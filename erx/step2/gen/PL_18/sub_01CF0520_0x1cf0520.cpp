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

// Function: sub_01CF0520
// Address: 0x1cf0520 - 0x1cf0590
void sub_01CF0520_0x1cf0520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0520_0x1cf0520");
#endif

    switch (ctx->pc) {
        case 0x1cf0544u: goto label_1cf0544;
        case 0x1cf0554u: goto label_1cf0554;
        case 0x1cf0560u: goto label_1cf0560;
        case 0x1cf0570u: goto label_1cf0570;
        default: break;
    }

    ctx->pc = 0x1cf0520u;

    // 0x1cf0520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf0520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf0524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf0524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf0528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf0528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf052c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0530: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cf0530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0534: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf0534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf0538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf0538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf053c: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF053Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0544u);
    ctx->pc = 0x1CF0540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF053Cu;
    // 0x1cf0540: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF053Cu, 0x1CF0544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0544u;
label_1cf0544:
    // 0x1cf0544: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cf0544u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cf0548: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cf0548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cf054c: 0xc73c00e  jal         func_1CF0038
    ctx->pc = 0x1CF054Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0554u);
    ctx->pc = 0x1CF0550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF054Cu;
    // 0x1cf0550: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF0038u, 0x1CF054Cu, 0x1CF0554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0554u;
label_1cf0554:
    // 0x1cf0554: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cf0554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cf0558: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF0558u;
    SET_GPR_U32(ctx, 31, 0x1CF0560u);
    ctx->pc = 0x1CF055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0558u;
    // 0x1cf055c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF0558u, 0x1CF0560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0560u;
label_1cf0560:
    // 0x1cf0560: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cf0560u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cf0564: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cf0564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cf0568: 0xc73c00e  jal         func_1CF0038
    ctx->pc = 0x1CF0568u;
    SET_GPR_U32(ctx, 31, 0x1CF0570u);
    ctx->pc = 0x1CF056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0568u;
    // 0x1cf056c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF0038u, 0x1CF0568u, 0x1CF0570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0570u;
label_1cf0570:
    // 0x1cf0570: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cf0570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cf0574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf0574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cf0578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf057c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf057cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf0580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf0580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf0584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf0588: 0x873bd6c  j           func_1CEF5B0
    ctx->pc = 0x1CF0588u;
    ctx->pc = 0x1CF058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0588u;
    // 0x1cf058c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5B0u;
    sub_01CEF5B0_0x1cef5b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF0590u;
}
