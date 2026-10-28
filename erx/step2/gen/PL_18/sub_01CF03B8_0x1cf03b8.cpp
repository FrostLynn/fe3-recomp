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

// Function: sub_01CF03B8
// Address: 0x1cf03b8 - 0x1cf0430
void sub_01CF03B8_0x1cf03b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF03B8_0x1cf03b8");
#endif

    switch (ctx->pc) {
        case 0x1cf03e4u: goto label_1cf03e4;
        case 0x1cf03f0u: goto label_1cf03f0;
        case 0x1cf0400u: goto label_1cf0400;
        case 0x1cf0418u: goto label_1cf0418;
        default: break;
    }

    ctx->pc = 0x1cf03b8u;

    // 0x1cf03b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf03b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf03bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cf03bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf03c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf03c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf03c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf03c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf03c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf03c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf03cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf03ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf03d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf03d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf03d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cf03d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf03d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cf03d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf03dc: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF03DCu;
    SET_GPR_U32(ctx, 31, 0x1CF03E4u);
    ctx->pc = 0x1CF03E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF03DCu;
    // 0x1cf03e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF03DCu, 0x1CF03E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF03E4u;
label_1cf03e4:
    // 0x1cf03e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf03e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf03e8: 0xc73bd5c  jal         func_1CEF570
    ctx->pc = 0x1CF03E8u;
    SET_GPR_U32(ctx, 31, 0x1CF03F0u);
    ctx->pc = 0x1CF03ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF03E8u;
    // 0x1cf03ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF570u, 0x1CF03E8u, 0x1CF03F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF03F0u;
label_1cf03f0:
    // 0x1cf03f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf03f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf03f4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cf03f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cf03f8: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF03F8u;
    SET_GPR_U32(ctx, 31, 0x1CF0400u);
    ctx->pc = 0x1CF03FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF03F8u;
    // 0x1cf03fc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF03F8u, 0x1CF0400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0400u;
label_1cf0400:
    // 0x1cf0400: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf0400u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf0404: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cf0404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cf0408: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cf0408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cf040c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf040cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf0410: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF0410u;
    SET_GPR_U32(ctx, 31, 0x1CF0418u);
    ctx->pc = 0x1CF0414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0410u;
    // 0x1cf0414: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF0410u, 0x1CF0418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0418u;
label_1cf0418:
    // 0x1cf0418: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cf0418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cf041c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf041cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0420: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf0420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf0424: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF0424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0424u;
        // 0x1cf0428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF0424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF042Cu;
    // 0x1cf042c: 0x0  nop
    ctx->pc = 0x1cf042cu;
    // NOP
    ctx->pc = 0x1cf0430u;
}
