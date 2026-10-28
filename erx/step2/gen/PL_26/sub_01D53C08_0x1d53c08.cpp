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

// Function: sub_01D53C08
// Address: 0x1d53c08 - 0x1d53ce8
void sub_01D53C08_0x1d53c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53C08_0x1d53c08");
#endif

    switch (ctx->pc) {
        case 0x1d53c38u: goto label_1d53c38;
        case 0x1d53c4cu: goto label_1d53c4c;
        case 0x1d53c50u: goto label_1d53c50;
        case 0x1d53c68u: goto label_1d53c68;
        case 0x1d53c70u: goto label_1d53c70;
        case 0x1d53cb0u: goto label_1d53cb0;
        case 0x1d53cb8u: goto label_1d53cb8;
        default: break;
    }

    ctx->pc = 0x1d53c08u;

    // 0x1d53c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d53c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d53c0c: 0x240f00d4  addiu       $t7, $zero, 0xD4
    ctx->pc = 0x1d53c0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x1d53c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d53c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d53c14: 0x108f002f  beq         $a0, $t7, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D53C14u;
    {
        const bool branch_taken_0x1d53c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D53C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C14u;
        // 0x1d53c18: 0x288f00d5  slti        $t7, $a0, 0xD5 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)213) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c14) {
            ctx->pc = 0x1D53CD4u;
            goto label_1d53cd4;
        }
    }
    ctx->pc = 0x1D53C1Cu;
    // 0x1d53c1c: 0x11e0001b  beqz        $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D53C1Cu;
    {
        const bool branch_taken_0x1d53c1c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C1Cu;
        // 0x1d53c20: 0x240f00d2  addiu       $t7, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c1c) {
            ctx->pc = 0x1D53C8Cu;
            goto label_1d53c8c;
        }
    }
    ctx->pc = 0x1D53C24u;
    // 0x1d53c24: 0x108f0014  beq         $a0, $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D53C24u;
    {
        const bool branch_taken_0x1d53c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D53C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C24u;
        // 0x1d53c28: 0x240f00d3  addiu       $t7, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c24) {
            ctx->pc = 0x1D53C78u;
            goto label_1d53c78;
        }
    }
    ctx->pc = 0x1D53C2Cu;
    // 0x1d53c2c: 0x108f000b  beq         $a0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1D53C2Cu;
    {
        const bool branch_taken_0x1d53c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D53C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C2Cu;
        // 0x1d53c30: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c2c) {
            ctx->pc = 0x1D53C5Cu;
            goto label_1d53c5c;
        }
    }
    ctx->pc = 0x1D53C34u;
    // 0x1d53c34: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x1d53c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
label_1d53c38:
    // 0x1d53c38: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x1d53c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x1d53c3c: 0x24840fb8  addiu       $a0, $a0, 0xFB8
    ctx->pc = 0x1d53c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4024));
    // 0x1d53c40: 0x24a54948  addiu       $a1, $a1, 0x4948
    ctx->pc = 0x1d53c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18760));
    // 0x1d53c44: 0xc7543f0  jal         func_1D50FC0
    ctx->pc = 0x1D53C44u;
    SET_GPR_U32(ctx, 31, 0x1D53C4Cu);
    ctx->pc = 0x1D53C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53C44u;
    // 0x1d53c48: 0x24060431  addiu       $a2, $zero, 0x431 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50FC0u, 0x1D53C44u, 0x1D53C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53C4Cu;
label_1d53c4c:
    // 0x1d53c4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d53c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d53c50:
    // 0x1d53c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d53c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53c54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C54u;
        // 0x1d53c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53C5Cu;
label_1d53c5c:
    // 0x1d53c5c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d53c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53c60: 0x3c0601d6  lui         $a2, 0x1D6
    ctx->pc = 0x1d53c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)470 << 16));
    // 0x1d53c64: 0x24c68650  addiu       $a2, $a2, -0x79B0
    ctx->pc = 0x1d53c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936144));
label_1d53c68:
    // 0x1d53c68: 0xc754ed2  jal         func_1D53B48
    ctx->pc = 0x1D53C68u;
    SET_GPR_U32(ctx, 31, 0x1D53C70u);
    ctx->pc = 0x1D53B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53B48u, 0x1D53C68u, 0x1D53C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53C70u;
label_1d53c70:
    // 0x1d53c70: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D53C70u;
    {
        const bool branch_taken_0x1d53c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C70u;
        // 0x1d53c74: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c70) {
            ctx->pc = 0x1D53C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53c50;
        }
    }
    ctx->pc = 0x1D53C78u;
label_1d53c78:
    // 0x1d53c78: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d53c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53c7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d53c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53c80: 0x3c0601d6  lui         $a2, 0x1D6
    ctx->pc = 0x1d53c80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)470 << 16));
    // 0x1d53c84: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D53C84u;
    {
        const bool branch_taken_0x1d53c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C84u;
        // 0x1d53c88: 0x24c68320  addiu       $a2, $a2, -0x7CE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c84) {
            ctx->pc = 0x1D53C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53c68;
        }
    }
    ctx->pc = 0x1D53C8Cu;
label_1d53c8c:
    // 0x1d53c8c: 0x240f015a  addiu       $t7, $zero, 0x15A
    ctx->pc = 0x1d53c8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
    // 0x1d53c90: 0x108f000b  beq         $a0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1D53C90u;
    {
        const bool branch_taken_0x1d53c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D53C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C90u;
        // 0x1d53c94: 0x240f015b  addiu       $t7, $zero, 0x15B (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c90) {
            ctx->pc = 0x1D53CC0u;
            goto label_1d53cc0;
        }
    }
    ctx->pc = 0x1D53C98u;
    // 0x1d53c98: 0x148fffe7  bne         $a0, $t7, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D53C98u;
    {
        const bool branch_taken_0x1d53c98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D53C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C98u;
        // 0x1d53c9c: 0x3c0401d5  lui         $a0, 0x1D5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)469 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53c98) {
            ctx->pc = 0x1D53C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53c38;
        }
    }
    ctx->pc = 0x1D53CA0u;
    // 0x1d53ca0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d53ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53ca4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d53ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53ca8: 0x3c0601d6  lui         $a2, 0x1D6
    ctx->pc = 0x1d53ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)470 << 16));
    // 0x1d53cac: 0x24c682f0  addiu       $a2, $a2, -0x7D10
    ctx->pc = 0x1d53cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935280));
label_1d53cb0:
    // 0x1d53cb0: 0xc7547e4  jal         func_1D51F90
    ctx->pc = 0x1D53CB0u;
    SET_GPR_U32(ctx, 31, 0x1D53CB8u);
    ctx->pc = 0x1D51F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51F90u, 0x1D53CB0u, 0x1D53CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53CB8u;
label_1d53cb8:
    // 0x1d53cb8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D53CB8u;
    {
        const bool branch_taken_0x1d53cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53CB8u;
        // 0x1d53cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53cb8) {
            ctx->pc = 0x1D53C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53c50;
        }
    }
    ctx->pc = 0x1D53CC0u;
label_1d53cc0:
    // 0x1d53cc0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d53cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53cc4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d53cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53cc8: 0x3c0601d6  lui         $a2, 0x1D6
    ctx->pc = 0x1d53cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)470 << 16));
    // 0x1d53ccc: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D53CCCu;
    {
        const bool branch_taken_0x1d53ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53CCCu;
        // 0x1d53cd0: 0x24c682c0  addiu       $a2, $a2, -0x7D40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53ccc) {
            ctx->pc = 0x1D53CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53cb0;
        }
    }
    ctx->pc = 0x1D53CD4u;
label_1d53cd4:
    // 0x1d53cd4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d53cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53cd8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d53cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53cdc: 0x3c0601d6  lui         $a2, 0x1D6
    ctx->pc = 0x1d53cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)470 << 16));
    // 0x1d53ce0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x1D53CE0u;
    {
        const bool branch_taken_0x1d53ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53CE0u;
        // 0x1d53ce4: 0x24c68980  addiu       $a2, $a2, -0x7680 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53ce0) {
            ctx->pc = 0x1D53C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53c68;
        }
    }
    ctx->pc = 0x1D53CE8u;
}
