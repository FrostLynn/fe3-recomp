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

// Function: sub_01D29AB4
// Address: 0x1d29ab4 - 0x1d29b50
void sub_01D29AB4_0x1d29ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29AB4_0x1d29ab4");
#endif

    switch (ctx->pc) {
        case 0x1d29ac8u: goto label_1d29ac8;
        case 0x1d29ad0u: goto label_1d29ad0;
        case 0x1d29ae0u: goto label_1d29ae0;
        case 0x1d29ae8u: goto label_1d29ae8;
        case 0x1d29b00u: goto label_1d29b00;
        case 0x1d29b08u: goto label_1d29b08;
        case 0x1d29b1cu: goto label_1d29b1c;
        case 0x1d29b30u: goto label_1d29b30;
        case 0x1d29b48u: goto label_1d29b48;
        default: break;
    }

    ctx->pc = 0x1d29ab4u;

    // 0x1d29ab4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d29ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29ab8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d29ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29abc: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x1d29abcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x1d29ac0: 0xc74a064  jal         func_1D28190
    ctx->pc = 0x1D29AC0u;
    SET_GPR_U32(ctx, 31, 0x1D29AC8u);
    ctx->pc = 0x1D29AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29AC0u;
    // 0x1d29ac4: 0x24c6f1a0  addiu       $a2, $a2, -0xE60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D28190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D28190u, 0x1D29AC0u, 0x1D29AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29AC8u;
label_1d29ac8:
    // 0x1d29ac8: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1D29AC8u;
    {
        const bool branch_taken_0x1d29ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29AC8u;
        // 0x1d29acc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29ac8) {
            ctx->pc = 0x1D29AA4u;
            return;
        }
    }
    ctx->pc = 0x1D29AD0u;
label_1d29ad0:
    // 0x1d29ad0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d29ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29ad4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d29ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29ad8: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x1d29ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x1d29adc: 0x24c6f140  addiu       $a2, $a2, -0xEC0
    ctx->pc = 0x1d29adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963520));
label_1d29ae0:
    // 0x1d29ae0: 0xc749f2c  jal         func_1D27CB0
    ctx->pc = 0x1D29AE0u;
    SET_GPR_U32(ctx, 31, 0x1D29AE8u);
    ctx->pc = 0x1D27CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27CB0u, 0x1D29AE0u, 0x1D29AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29AE8u;
label_1d29ae8:
    // 0x1d29ae8: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d29ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d29aec: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d29aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d29af0: 0x25ef33ec  addiu       $t7, $t7, 0x33EC
    ctx->pc = 0x1d29af0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13292));
    // 0x1d29af4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d29af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29af8: 0xc749b08  jal         func_1D26C20
    ctx->pc = 0x1D29AF8u;
    SET_GPR_U32(ctx, 31, 0x1D29B00u);
    ctx->pc = 0x1D29AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29AF8u;
    // 0x1d29afc: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C20u, 0x1D29AF8u, 0x1D29B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29B00u;
label_1d29b00:
    // 0x1d29b00: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D29B00u;
    {
        const bool branch_taken_0x1d29b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29B00u;
        // 0x1d29b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29b00) {
            ctx->pc = 0x1D29AA4u;
            return;
        }
    }
    ctx->pc = 0x1D29B08u;
label_1d29b08:
    // 0x1d29b08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d29b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29b0c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d29b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29b10: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x1d29b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x1d29b14: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D29B14u;
    {
        const bool branch_taken_0x1d29b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29B14u;
        // 0x1d29b18: 0x24c6f170  addiu       $a2, $a2, -0xE90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29b14) {
            ctx->pc = 0x1D29A98u;
            return;
        }
    }
    ctx->pc = 0x1D29B1Cu;
label_1d29b1c:
    // 0x1d29b1c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d29b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29b20: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d29b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29b24: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x1d29b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x1d29b28: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1D29B28u;
    {
        const bool branch_taken_0x1d29b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29B28u;
        // 0x1d29b2c: 0x24c6f170  addiu       $a2, $a2, -0xE90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29b28) {
            ctx->pc = 0x1D29AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29ae0;
        }
    }
    ctx->pc = 0x1D29B30u;
label_1d29b30:
    // 0x1d29b30: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x1d29b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x1d29b34: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x1d29b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x1d29b38: 0x24846cd0  addiu       $a0, $a0, 0x6CD0
    ctx->pc = 0x1d29b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27856));
    // 0x1d29b3c: 0x24a5a898  addiu       $a1, $a1, -0x5768
    ctx->pc = 0x1d29b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944920));
    // 0x1d29b40: 0xc749b36  jal         func_1D26CD8
    ctx->pc = 0x1D29B40u;
    SET_GPR_U32(ctx, 31, 0x1D29B48u);
    ctx->pc = 0x1D29B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29B40u;
    // 0x1d29b44: 0x24060405  addiu       $a2, $zero, 0x405 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26CD8u, 0x1D29B40u, 0x1D29B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29B48u;
label_1d29b48:
    // 0x1d29b48: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D29B48u;
    {
        const bool branch_taken_0x1d29b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29B48u;
        // 0x1d29b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29b48) {
            ctx->pc = 0x1D29AA4u;
            return;
        }
    }
    ctx->pc = 0x1D29B50u;
}
