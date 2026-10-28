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

// Function: sub_01DE1DE8
// Address: 0x1de1de8 - 0x1de1e50
void sub_01DE1DE8_0x1de1de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1DE8_0x1de1de8");
#endif

    switch (ctx->pc) {
        case 0x1de1e00u: goto label_1de1e00;
        case 0x1de1e24u: goto label_1de1e24;
        case 0x1de1e2cu: goto label_1de1e2c;
        default: break;
    }

    ctx->pc = 0x1de1de8u;

    // 0x1de1de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de1de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de1dec: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1decu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1df0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de1df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de1df4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de1df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de1df8: 0xc77864a  jal         func_1DE1928
    ctx->pc = 0x1DE1DF8u;
    SET_GPR_U32(ctx, 31, 0x1DE1E00u);
    ctx->pc = 0x1DE1DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1DF8u;
    // 0x1de1dfc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1928u, 0x1DE1DF8u, 0x1DE1E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1E00u;
label_1de1e00:
    // 0x1de1e00: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1de1e00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1de1e04: 0x240f015e  addiu       $t7, $zero, 0x15E
    ctx->pc = 0x1de1e04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1de1e08: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE1E08u;
    {
        const bool branch_taken_0x1de1e08 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DE1E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1E08u;
        // 0x1de1e0c: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1e08) {
            ctx->pc = 0x1DE1E1Cu;
            goto label_1de1e1c;
        }
    }
    ctx->pc = 0x1DE1E10u;
    // 0x1de1e10: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de1e10u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de1e14: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x1de1e14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x1de1e18: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de1e18u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de1e1c:
    // 0x1de1e1c: 0xc7786a6  jal         func_1DE1A98
    ctx->pc = 0x1DE1E1Cu;
    SET_GPR_U32(ctx, 31, 0x1DE1E24u);
    ctx->pc = 0x1DE1A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1A98u, 0x1DE1E1Cu, 0x1DE1E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1E24u;
label_1de1e24:
    // 0x1de1e24: 0xc7786b4  jal         func_1DE1AD0
    ctx->pc = 0x1DE1E24u;
    SET_GPR_U32(ctx, 31, 0x1DE1E2Cu);
    ctx->pc = 0x1DE1AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1AD0u, 0x1DE1E24u, 0x1DE1E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1E2Cu;
label_1de1e2c:
    // 0x1de1e2c: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de1e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1e30: 0x2405f6d2  addiu       $a1, $zero, -0x92E
    ctx->pc = 0x1de1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964946));
    // 0x1de1e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de1e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1e38: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1de1e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1de1e3c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de1e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de1e40: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1de1e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1de1e44: 0x877865a  j           func_1DE1968
    ctx->pc = 0x1DE1E44u;
    ctx->pc = 0x1DE1E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1E44u;
    // 0x1de1e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1968u;
    sub_01DE1968_0x1de1968(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE1E4Cu;
    // 0x1de1e4c: 0x0  nop
    ctx->pc = 0x1de1e4cu;
    // NOP
    ctx->pc = 0x1de1e50u;
}
