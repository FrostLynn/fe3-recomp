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

// Function: sub_01CCF338
// Address: 0x1ccf338 - 0x1ccf378
void sub_01CCF338_0x1ccf338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF338_0x1ccf338");
#endif

    switch (ctx->pc) {
        case 0x1ccf34cu: goto label_1ccf34c;
        case 0x1ccf358u: goto label_1ccf358;
        default: break;
    }

    ctx->pc = 0x1ccf338u;

    // 0x1ccf338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf33c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf340: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf344: 0xc733520  jal         func_1CCD480
    ctx->pc = 0x1CCF344u;
    SET_GPR_U32(ctx, 31, 0x1CCF34Cu);
    ctx->pc = 0x1CCF348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF344u;
    // 0x1ccf348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD480u, 0x1CCF344u, 0x1CCF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF34Cu;
label_1ccf34c:
    // 0x1ccf34c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ccf34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ccf350: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF350u;
    SET_GPR_U32(ctx, 31, 0x1CCF358u);
    ctx->pc = 0x1CCF354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF350u;
    // 0x1ccf354: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF350u, 0x1CCF358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF358u;
label_1ccf358:
    // 0x1ccf358: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1ccf358u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1ccf35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf360: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1ccf360u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1ccf364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf368: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1ccf368u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1ccf36c: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1ccf36cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1ccf370: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF370u;
        // 0x1ccf374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF378u;
}
