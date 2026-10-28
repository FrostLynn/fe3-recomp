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

// Function: sub_01C01BE8
// Address: 0x1c01be8 - 0x1c01c70
void sub_01C01BE8_0x1c01be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01BE8_0x1c01be8");
#endif

    switch (ctx->pc) {
        case 0x1c01c04u: goto label_1c01c04;
        case 0x1c01c3cu: goto label_1c01c3c;
        case 0x1c01c50u: goto label_1c01c50;
        default: break;
    }

    ctx->pc = 0x1c01be8u;

    // 0x1c01be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c01becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c01bf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c01bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c01bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c01bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01bf8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c01bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c01bfc: 0xc70001a  jal         func_1C00068
    ctx->pc = 0x1C01BFCu;
    SET_GPR_U32(ctx, 31, 0x1C01C04u);
    ctx->pc = 0x1C01C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01BFCu;
    // 0x1c01c00: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00068u, 0x1C01BFCu, 0x1C01C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01C04u;
label_1c01c04:
    // 0x1c01c04: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1c01c04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c01c08: 0x25effff3  addiu       $t7, $t7, -0xD
    ctx->pc = 0x1c01c08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967283));
    // 0x1c01c0c: 0x2dee0011  sltiu       $t6, $t7, 0x11
    ctx->pc = 0x1c01c0cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c01c10: 0x11c0001b  beqz        $t6, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C01C10u;
    {
        const bool branch_taken_0x1c01c10 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C10u;
        // 0x1c01c14: 0x3c0e01c0  lui         $t6, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c10) {
            ctx->pc = 0x1C01C80u;
            return;
        }
    }
    ctx->pc = 0x1C01C18u;
    // 0x1c01c18: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c01c18u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c01c1c: 0x25ce36b0  addiu       $t6, $t6, 0x36B0
    ctx->pc = 0x1c01c1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 14000));
    // 0x1c01c20: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c01c20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c01c24: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c01c24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c01c28: 0x1a00008  jr          $t5
    ctx->pc = 0x1C01C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C01C30u: goto label_1c01c30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01C28u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C01C30u;
label_1c01c30:
    // 0x1c01c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01c34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01c38: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1c01c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1c01c3c:
    // 0x1c01c3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c01c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c01c40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c01c40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01c44: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c01c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c01c48: 0xc700024  jal         func_1C00090
    ctx->pc = 0x1C01C48u;
    SET_GPR_U32(ctx, 31, 0x1C01C50u);
    ctx->pc = 0x1C01C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01C48u;
    // 0x1c01c4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00090u, 0x1C01C48u, 0x1C01C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01C50u;
label_1c01c50:
    // 0x1c01c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01c54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c01c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c01c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01c5c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1c01c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1c01c60: 0x240600a2  addiu       $a2, $zero, 0xA2
    ctx->pc = 0x1c01c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1c01c64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c01c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01c68: 0x87002ea  j           func_1C00BA8
    ctx->pc = 0x1C01C68u;
    ctx->pc = 0x1C01C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01C68u;
    // 0x1c01c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00BA8u;
    sub_01C00BA8_0x1c00ba8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01C70u;
}
