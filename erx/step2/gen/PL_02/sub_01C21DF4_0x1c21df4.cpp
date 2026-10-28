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

// Function: sub_01C21DF4
// Address: 0x1c21df4 - 0x1c21e78
void sub_01C21DF4_0x1c21df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21DF4_0x1c21df4");
#endif

    switch (ctx->pc) {
        case 0x1c21e04u: goto label_1c21e04;
        case 0x1c21e14u: goto label_1c21e14;
        case 0x1c21e24u: goto label_1c21e24;
        case 0x1c21e4cu: goto label_1c21e4c;
        case 0x1c21e58u: goto label_1c21e58;
        default: break;
    }

    ctx->pc = 0x1c21df4u;

    // 0x1c21df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c21df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21dfc: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1C21DFCu;
    {
        const bool branch_taken_0x1c21dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21DFCu;
        // 0x1c21e00: 0x240601d4  addiu       $a2, $zero, 0x1D4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 468));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21dfc) {
            ctx->pc = 0x1C21D38u;
            return;
        }
    }
    ctx->pc = 0x1C21E04u;
label_1c21e04:
    // 0x1c21e04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c21e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e0c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1C21E0Cu;
    {
        const bool branch_taken_0x1c21e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21E0Cu;
        // 0x1c21e10: 0x240601d5  addiu       $a2, $zero, 0x1D5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21e0c) {
            ctx->pc = 0x1C21D38u;
            return;
        }
    }
    ctx->pc = 0x1C21E14u;
label_1c21e14:
    // 0x1c21e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c21e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e1c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1C21E1Cu;
    {
        const bool branch_taken_0x1c21e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21E1Cu;
        // 0x1c21e20: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21e1c) {
            ctx->pc = 0x1C21D38u;
            return;
        }
    }
    ctx->pc = 0x1C21E24u;
label_1c21e24:
    // 0x1c21e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c21e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e2c: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x1C21E2Cu;
    {
        const bool branch_taken_0x1c21e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21E2Cu;
        // 0x1c21e30: 0x240601d6  addiu       $a2, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21e2c) {
            ctx->pc = 0x1C21D38u;
            return;
        }
    }
    ctx->pc = 0x1C21E34u;
    // 0x1c21e34: 0x0  nop
    ctx->pc = 0x1c21e34u;
    // NOP
    // 0x1c21e38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21e3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21e40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c21e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c21e44: 0xc707c64  jal         func_1C1F190
    ctx->pc = 0x1C21E44u;
    SET_GPR_U32(ctx, 31, 0x1C21E4Cu);
    ctx->pc = 0x1C21E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21E44u;
    // 0x1c21e48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F190u, 0x1C21E44u, 0x1C21E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21E4Cu;
label_1c21e4c:
    // 0x1c21e4c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c21e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c21e50: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21E50u;
    SET_GPR_U32(ctx, 31, 0x1C21E58u);
    ctx->pc = 0x1C21E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21E50u;
    // 0x1c21e54: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21E50u, 0x1C21E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21E58u;
label_1c21e58:
    // 0x1c21e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c21e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c21e60: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c21e60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c21e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21e68: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1c21e68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c21e6c: 0x8707f12  j           func_1C1FC48
    ctx->pc = 0x1C21E6Cu;
    ctx->pc = 0x1C21E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21E6Cu;
    // 0x1c21e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC48u;
    sub_01C1FC48_0x1c1fc48(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21E74u;
    // 0x1c21e74: 0x0  nop
    ctx->pc = 0x1c21e74u;
    // NOP
    ctx->pc = 0x1c21e78u;
}
