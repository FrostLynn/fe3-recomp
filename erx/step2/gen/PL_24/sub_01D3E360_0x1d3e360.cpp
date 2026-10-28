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

// Function: sub_01D3E360
// Address: 0x1d3e360 - 0x1d3e3e0
void sub_01D3E360_0x1d3e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3E360_0x1d3e360");
#endif

    switch (ctx->pc) {
        case 0x1d3e3a0u: goto label_1d3e3a0;
        case 0x1d3e3a4u: goto label_1d3e3a4;
        case 0x1d3e3c0u: goto label_1d3e3c0;
        case 0x1d3e3d4u: goto label_1d3e3d4;
        default: break;
    }

    ctx->pc = 0x1d3e360u;

    // 0x1d3e360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3e364: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1d3e364u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e368: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1d3e368u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e36c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3e36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3e370: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d3e370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e374: 0x240f013d  addiu       $t7, $zero, 0x13D
    ctx->pc = 0x1d3e374u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
    // 0x1d3e378: 0x11cf0013  beq         $t6, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D3E378u;
    {
        const bool branch_taken_0x1d3e378 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D3E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E378u;
        // 0x1d3e37c: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e378) {
            ctx->pc = 0x1D3E3C8u;
            goto label_1d3e3c8;
        }
    }
    ctx->pc = 0x1D3E380u;
    // 0x1d3e380: 0x240f013e  addiu       $t7, $zero, 0x13E
    ctx->pc = 0x1d3e380u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x1d3e384: 0x11cf000a  beq         $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3E384u;
    {
        const bool branch_taken_0x1d3e384 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D3E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E384u;
        // 0x1d3e388: 0x3c0401d4  lui         $a0, 0x1D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)468 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e384) {
            ctx->pc = 0x1D3E3B0u;
            goto label_1d3e3b0;
        }
    }
    ctx->pc = 0x1D3E38Cu;
    // 0x1d3e38c: 0x3c0501d4  lui         $a1, 0x1D4
    ctx->pc = 0x1d3e38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)468 << 16));
    // 0x1d3e390: 0x2484bcb8  addiu       $a0, $a0, -0x4348
    ctx->pc = 0x1d3e390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950072));
    // 0x1d3e394: 0x24a5ee10  addiu       $a1, $a1, -0x11F0
    ctx->pc = 0x1d3e394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962704));
    // 0x1d3e398: 0xc74ef30  jal         func_1D3BCC0
    ctx->pc = 0x1D3E398u;
    SET_GPR_U32(ctx, 31, 0x1D3E3A0u);
    ctx->pc = 0x1D3E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E398u;
    // 0x1d3e39c: 0x24060313  addiu       $a2, $zero, 0x313 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 787));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BCC0u, 0x1D3E398u, 0x1D3E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E3A0u;
label_1d3e3a0:
    // 0x1d3e3a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3e3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3e3a4:
    // 0x1d3e3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3e3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3e3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3E3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E3A8u;
        // 0x1d3e3ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E3B0u;
label_1d3e3b0:
    // 0x1d3e3b0: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1d3e3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e3b4: 0x3c0601d4  lui         $a2, 0x1D4
    ctx->pc = 0x1d3e3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)468 << 16));
    // 0x1d3e3b8: 0xc74f50c  jal         func_1D3D430
    ctx->pc = 0x1D3E3B8u;
    SET_GPR_U32(ctx, 31, 0x1D3E3C0u);
    ctx->pc = 0x1D3E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E3B8u;
    // 0x1d3e3bc: 0x24c61f80  addiu       $a2, $a2, 0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3D430u, 0x1D3E3B8u, 0x1D3E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E3C0u;
label_1d3e3c0:
    // 0x1d3e3c0: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D3E3C0u;
    {
        const bool branch_taken_0x1d3e3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E3C0u;
        // 0x1d3e3c4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e3c0) {
            ctx->pc = 0x1D3E3A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3e3a4;
        }
    }
    ctx->pc = 0x1D3E3C8u;
label_1d3e3c8:
    // 0x1d3e3c8: 0x3c0601d4  lui         $a2, 0x1D4
    ctx->pc = 0x1d3e3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)468 << 16));
    // 0x1d3e3cc: 0xc74f560  jal         func_1D3D580
    ctx->pc = 0x1D3E3CCu;
    SET_GPR_U32(ctx, 31, 0x1D3E3D4u);
    ctx->pc = 0x1D3E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E3CCu;
    // 0x1d3e3d0: 0x24c61f60  addiu       $a2, $a2, 0x1F60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3D580u, 0x1D3E3CCu, 0x1D3E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E3D4u;
label_1d3e3d4:
    // 0x1d3e3d4: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D3E3D4u;
    {
        const bool branch_taken_0x1d3e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E3D4u;
        // 0x1d3e3d8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e3d4) {
            ctx->pc = 0x1D3E3A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3e3a4;
        }
    }
    ctx->pc = 0x1D3E3DCu;
    // 0x1d3e3dc: 0x0  nop
    ctx->pc = 0x1d3e3dcu;
    // NOP
    ctx->pc = 0x1d3e3e0u;
}
