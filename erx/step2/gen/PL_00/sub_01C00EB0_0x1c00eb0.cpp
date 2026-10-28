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

// Function: sub_01C00EB0
// Address: 0x1c00eb0 - 0x1c00f28
void sub_01C00EB0_0x1c00eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00EB0_0x1c00eb0");
#endif

    switch (ctx->pc) {
        case 0x1c00edcu: goto label_1c00edc;
        case 0x1c00ee8u: goto label_1c00ee8;
        case 0x1c00ef8u: goto label_1c00ef8;
        case 0x1c00f10u: goto label_1c00f10;
        default: break;
    }

    ctx->pc = 0x1c00eb0u;

    // 0x1c00eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c00eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c00eb4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c00eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c00eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c00eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c00ebc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c00ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00ec0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c00ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c00ec4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c00ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c00ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00ecc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c00eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00ed0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c00ed0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00ed4: 0xc700024  jal         func_1C00090
    ctx->pc = 0x1C00ED4u;
    SET_GPR_U32(ctx, 31, 0x1C00EDCu);
    ctx->pc = 0x1C00ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00ED4u;
    // 0x1c00ed8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00090u, 0x1C00ED4u, 0x1C00EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00EDCu;
label_1c00edc:
    // 0x1c00edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c00edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00ee0: 0xc70001c  jal         func_1C00070
    ctx->pc = 0x1C00EE0u;
    SET_GPR_U32(ctx, 31, 0x1C00EE8u);
    ctx->pc = 0x1C00EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00EE0u;
    // 0x1c00ee4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00070u, 0x1C00EE0u, 0x1C00EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00EE8u;
label_1c00ee8:
    // 0x1c00ee8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c00ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c00eec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c00eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c00ef0: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C00EF0u;
    SET_GPR_U32(ctx, 31, 0x1C00EF8u);
    ctx->pc = 0x1C00EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00EF0u;
    // 0x1c00ef4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C00EF0u, 0x1C00EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00EF8u;
label_1c00ef8:
    // 0x1c00ef8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c00ef8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00efc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c00efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c00f00: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c00f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c00f04: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c00f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c00f08: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C00F08u;
    SET_GPR_U32(ctx, 31, 0x1C00F10u);
    ctx->pc = 0x1C00F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00F08u;
    // 0x1c00f0c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C00F08u, 0x1C00F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00F10u;
label_1c00f10:
    // 0x1c00f10: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c00f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c00f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c00f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00f18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c00f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c00f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C00F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00F1Cu;
        // 0x1c00f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C00F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C00F24u;
    // 0x1c00f24: 0x0  nop
    ctx->pc = 0x1c00f24u;
    // NOP
    ctx->pc = 0x1c00f28u;
}
