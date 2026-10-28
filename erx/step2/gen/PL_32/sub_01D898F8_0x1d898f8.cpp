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

// Function: sub_01D898F8
// Address: 0x1d898f8 - 0x1d89968
void sub_01D898F8_0x1d898f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D898F8_0x1d898f8");
#endif

    switch (ctx->pc) {
        case 0x1d8991cu: goto label_1d8991c;
        case 0x1d8992cu: goto label_1d8992c;
        case 0x1d89938u: goto label_1d89938;
        case 0x1d89948u: goto label_1d89948;
        default: break;
    }

    ctx->pc = 0x1d898f8u;

    // 0x1d898f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d898f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d898fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d898fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d89900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d89900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d89904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d89904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d89908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d89908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8990c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d8990cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d89910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d89910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89914: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D89914u;
    SET_GPR_U32(ctx, 31, 0x1D8991Cu);
    ctx->pc = 0x1D89918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89914u;
    // 0x1d89918: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D89914u, 0x1D8991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8991Cu;
label_1d8991c:
    // 0x1d8991c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d8991cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d89920: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d89920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d89924: 0xc762504  jal         func_1D89410
    ctx->pc = 0x1D89924u;
    SET_GPR_U32(ctx, 31, 0x1D8992Cu);
    ctx->pc = 0x1D89928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89924u;
    // 0x1d89928: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89410u, 0x1D89924u, 0x1D8992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8992Cu;
label_1d8992c:
    // 0x1d8992c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d8992cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d89930: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D89930u;
    SET_GPR_U32(ctx, 31, 0x1D89938u);
    ctx->pc = 0x1D89934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89930u;
    // 0x1d89934: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D89930u, 0x1D89938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89938u;
label_1d89938:
    // 0x1d89938: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d89938u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d8993c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d8993cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d89940: 0xc762504  jal         func_1D89410
    ctx->pc = 0x1D89940u;
    SET_GPR_U32(ctx, 31, 0x1D89948u);
    ctx->pc = 0x1D89944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89940u;
    // 0x1d89944: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89410u, 0x1D89940u, 0x1D89948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89948u;
label_1d89948:
    // 0x1d89948: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d89948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d8994c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d89950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d89954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d89958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d89958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8995c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8995cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d89960: 0x876226a  j           func_1D889A8
    ctx->pc = 0x1D89960u;
    ctx->pc = 0x1D89964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89960u;
    // 0x1d89964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D889A8u;
    sub_01D889A8_0x1d889a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D89968u;
}
