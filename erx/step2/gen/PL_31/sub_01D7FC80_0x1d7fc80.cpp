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

// Function: sub_01D7FC80
// Address: 0x1d7fc80 - 0x1d7fd48
void sub_01D7FC80_0x1d7fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7FC80_0x1d7fc80");
#endif

    switch (ctx->pc) {
        case 0x1d7fc9cu: goto label_1d7fc9c;
        case 0x1d7fcacu: goto label_1d7fcac;
        case 0x1d7fcb8u: goto label_1d7fcb8;
        case 0x1d7fcc8u: goto label_1d7fcc8;
        case 0x1d7fce0u: goto label_1d7fce0;
        case 0x1d7fd0cu: goto label_1d7fd0c;
        default: break;
    }

    ctx->pc = 0x1d7fc80u;

    // 0x1d7fc80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7fc84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7fc88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7fc8c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7fc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7fc90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7fc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fc94: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7FC94u;
    SET_GPR_U32(ctx, 31, 0x1D7FC9Cu);
    ctx->pc = 0x1D7FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FC94u;
    // 0x1d7fc98: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7FC94u, 0x1D7FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FC9Cu;
label_1d7fc9c:
    // 0x1d7fc9c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d7fc9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d7fca0: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d7fca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d7fca4: 0xc75f88a  jal         func_1D7E228
    ctx->pc = 0x1D7FCA4u;
    SET_GPR_U32(ctx, 31, 0x1D7FCACu);
    ctx->pc = 0x1D7FCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FCA4u;
    // 0x1d7fca8: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7E228u, 0x1D7FCA4u, 0x1D7FCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FCACu;
label_1d7fcac:
    // 0x1d7fcac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7fcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7fcb0: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7FCB0u;
    SET_GPR_U32(ctx, 31, 0x1D7FCB8u);
    ctx->pc = 0x1D7FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FCB0u;
    // 0x1d7fcb4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7FCB0u, 0x1D7FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FCB8u;
label_1d7fcb8:
    // 0x1d7fcb8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d7fcb8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d7fcbc: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d7fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d7fcc0: 0xc75f88a  jal         func_1D7E228
    ctx->pc = 0x1D7FCC0u;
    SET_GPR_U32(ctx, 31, 0x1D7FCC8u);
    ctx->pc = 0x1D7FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FCC0u;
    // 0x1d7fcc4: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7E228u, 0x1D7FCC0u, 0x1D7FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FCC8u;
label_1d7fcc8:
    // 0x1d7fcc8: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d7fcc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d7fccc: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D7FCCCu;
    {
        const bool branch_taken_0x1d7fccc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7fccc) {
            ctx->pc = 0x1D7FCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7FCCCu;
            // 0x1d7fcd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7FD34u;
            goto label_1d7fd34;
        }
    }
    ctx->pc = 0x1D7FCD4u;
    // 0x1d7fcd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d7fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7fcd8: 0xc75f5e8  jal         func_1D7D7A0
    ctx->pc = 0x1D7FCD8u;
    SET_GPR_U32(ctx, 31, 0x1D7FCE0u);
    ctx->pc = 0x1D7FCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FCD8u;
    // 0x1d7fcdc: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D7A0u, 0x1D7FCD8u, 0x1D7FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FCE0u;
label_1d7fce0:
    // 0x1d7fce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7fce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7fce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fce8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7fce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7fcec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7fcecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fcf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7fcf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fcf4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d7fcf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7fcf8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d7fcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d7fcfc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D7FCFCu;
    {
        const bool branch_taken_0x1d7fcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FCFCu;
        // 0x1d7fd00: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fcfc) {
            ctx->pc = 0x1D7FD30u;
            goto label_1d7fd30;
        }
    }
    ctx->pc = 0x1D7FD04u;
    // 0x1d7fd04: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7FD04u;
    SET_GPR_U32(ctx, 31, 0x1D7FD0Cu);
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7FD04u, 0x1D7FD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FD0Cu;
label_1d7fd0c:
    // 0x1d7fd0c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7fd0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fd10: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d7fd10u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7fd14: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d7fd14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d7fd18: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d7fd18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d7fd1c: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d7fd1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7fd20: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7FD20u;
    {
        const bool branch_taken_0x1d7fd20 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FD20u;
        // 0x1d7fd24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fd20) {
            ctx->pc = 0x1D7FD34u;
            goto label_1d7fd34;
        }
    }
    ctx->pc = 0x1D7FD28u;
    // 0x1d7fd28: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d7fd28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d7fd2c: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d7fd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d7fd30:
    // 0x1d7fd30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7fd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7fd34:
    // 0x1d7fd34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7fd34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fd38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7fd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7fd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FD3Cu;
        // 0x1d7fd40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FD44u;
    // 0x1d7fd44: 0x0  nop
    ctx->pc = 0x1d7fd44u;
    // NOP
    ctx->pc = 0x1d7fd48u;
}
