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

// Function: sub_01D19F88
// Address: 0x1d19f88 - 0x1d1a050
void sub_01D19F88_0x1d19f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19F88_0x1d19f88");
#endif

    switch (ctx->pc) {
        case 0x1d19fa4u: goto label_1d19fa4;
        case 0x1d19fb4u: goto label_1d19fb4;
        case 0x1d19fc0u: goto label_1d19fc0;
        case 0x1d19fd0u: goto label_1d19fd0;
        case 0x1d19fe8u: goto label_1d19fe8;
        case 0x1d1a014u: goto label_1d1a014;
        default: break;
    }

    ctx->pc = 0x1d19f88u;

    // 0x1d19f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d19f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d19f8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d19f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d19f90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d19f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d19f94: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d19f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d19f98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d19f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19f9c: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D19F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D19FA4u);
    ctx->pc = 0x1D19FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19F9Cu;
    // 0x1d19fa0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D19F9Cu, 0x1D19FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19FA4u;
label_1d19fa4:
    // 0x1d19fa4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d19fa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d19fa8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d19fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d19fac: 0xc7466d8  jal         func_1D19B60
    ctx->pc = 0x1D19FACu;
    SET_GPR_U32(ctx, 31, 0x1D19FB4u);
    ctx->pc = 0x1D19FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19FACu;
    // 0x1d19fb0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B60u, 0x1D19FACu, 0x1D19FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19FB4u;
label_1d19fb4:
    // 0x1d19fb4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d19fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d19fb8: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D19FB8u;
    SET_GPR_U32(ctx, 31, 0x1D19FC0u);
    ctx->pc = 0x1D19FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19FB8u;
    // 0x1d19fbc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D19FB8u, 0x1D19FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19FC0u;
label_1d19fc0:
    // 0x1d19fc0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d19fc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d19fc4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d19fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d19fc8: 0xc7466d8  jal         func_1D19B60
    ctx->pc = 0x1D19FC8u;
    SET_GPR_U32(ctx, 31, 0x1D19FD0u);
    ctx->pc = 0x1D19FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19FC8u;
    // 0x1d19fcc: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B60u, 0x1D19FC8u, 0x1D19FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19FD0u;
label_1d19fd0:
    // 0x1d19fd0: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d19fd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d19fd4: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D19FD4u;
    {
        const bool branch_taken_0x1d19fd4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d19fd4) {
            ctx->pc = 0x1D19FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D19FD4u;
            // 0x1d19fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1A03Cu;
            goto label_1d1a03c;
        }
    }
    ctx->pc = 0x1D19FDCu;
    // 0x1d19fdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d19fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d19fe0: 0xc74642c  jal         func_1D190B0
    ctx->pc = 0x1D19FE0u;
    SET_GPR_U32(ctx, 31, 0x1D19FE8u);
    ctx->pc = 0x1D19FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D19FE0u;
    // 0x1d19fe4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D190B0u, 0x1D19FE0u, 0x1D19FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D19FE8u;
label_1d19fe8:
    // 0x1d19fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d19fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19fec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d19fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19ff0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d19ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d19ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d19ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19ff8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d19ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d19ffc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d19ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1a000: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d1a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d1a004: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D1A004u;
    {
        const bool branch_taken_0x1d1a004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A004u;
        // 0x1d1a008: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a004) {
            ctx->pc = 0x1D1A038u;
            goto label_1d1a038;
        }
    }
    ctx->pc = 0x1D1A00Cu;
    // 0x1d1a00c: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1A00Cu;
    SET_GPR_U32(ctx, 31, 0x1D1A014u);
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1A00Cu, 0x1D1A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A014u;
label_1d1a014:
    // 0x1d1a014: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1a014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1a018: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d1a018u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d1a01c: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d1a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d1a020: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d1a020u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d1a024: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d1a024u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1a028: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1A028u;
    {
        const bool branch_taken_0x1d1a028 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D1A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A028u;
        // 0x1d1a02c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a028) {
            ctx->pc = 0x1D1A03Cu;
            goto label_1d1a03c;
        }
    }
    ctx->pc = 0x1D1A030u;
    // 0x1d1a030: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d1a030u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1a034: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d1a034u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d1a038:
    // 0x1d1a038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1a038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1a03c:
    // 0x1d1a03c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1a03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a040: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1a040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1a044: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1A044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A044u;
        // 0x1d1a048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1A044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1A04Cu;
    // 0x1d1a04c: 0x0  nop
    ctx->pc = 0x1d1a04cu;
    // NOP
    ctx->pc = 0x1d1a050u;
}
