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

// Function: sub_01DBC128
// Address: 0x1dbc128 - 0x1dbc1f0
void sub_01DBC128_0x1dbc128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBC128_0x1dbc128");
#endif

    switch (ctx->pc) {
        case 0x1dbc144u: goto label_1dbc144;
        case 0x1dbc154u: goto label_1dbc154;
        case 0x1dbc160u: goto label_1dbc160;
        case 0x1dbc170u: goto label_1dbc170;
        case 0x1dbc188u: goto label_1dbc188;
        case 0x1dbc1b4u: goto label_1dbc1b4;
        default: break;
    }

    ctx->pc = 0x1dbc128u;

    // 0x1dbc128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbc128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbc12c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbc12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbc130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbc130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbc134: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbc134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbc138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbc138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc13c: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBC13Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC144u);
    ctx->pc = 0x1DBC140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC13Cu;
    // 0x1dbc140: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBC13Cu, 0x1DBC144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC144u;
label_1dbc144:
    // 0x1dbc144: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dbc144u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1dbc148: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1dbc148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dbc14c: 0xc76ef42  jal         func_1DBBD08
    ctx->pc = 0x1DBC14Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC154u);
    ctx->pc = 0x1DBC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC14Cu;
    // 0x1dbc150: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBD08u, 0x1DBC14Cu, 0x1DBC154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC154u;
label_1dbc154:
    // 0x1dbc154: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbc154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbc158: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBC158u;
    SET_GPR_U32(ctx, 31, 0x1DBC160u);
    ctx->pc = 0x1DBC15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC158u;
    // 0x1dbc15c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBC158u, 0x1DBC160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC160u;
label_1dbc160:
    // 0x1dbc160: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dbc160u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1dbc164: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1dbc164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dbc168: 0xc76ef42  jal         func_1DBBD08
    ctx->pc = 0x1DBC168u;
    SET_GPR_U32(ctx, 31, 0x1DBC170u);
    ctx->pc = 0x1DBC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC168u;
    // 0x1dbc16c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBD08u, 0x1DBC168u, 0x1DBC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC170u;
label_1dbc170:
    // 0x1dbc170: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1dbc170u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1dbc174: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DBC174u;
    {
        const bool branch_taken_0x1dbc174 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbc174) {
            ctx->pc = 0x1DBC178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBC174u;
            // 0x1dbc178: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBC1DCu;
            goto label_1dbc1dc;
        }
    }
    ctx->pc = 0x1DBC17Cu;
    // 0x1dbc17c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1dbc17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbc180: 0xc76ee6a  jal         func_1DBB9A8
    ctx->pc = 0x1DBC180u;
    SET_GPR_U32(ctx, 31, 0x1DBC188u);
    ctx->pc = 0x1DBC184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC180u;
    // 0x1dbc184: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB9A8u, 0x1DBC180u, 0x1DBC188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC188u;
label_1dbc188:
    // 0x1dbc188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbc188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc18c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dbc18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc190: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbc190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbc194: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbc194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc198: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbc198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc19c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1dbc19cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbc1a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1dbc1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1dbc1a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DBC1A4u;
    {
        const bool branch_taken_0x1dbc1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC1A4u;
        // 0x1dbc1a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc1a4) {
            ctx->pc = 0x1DBC1D8u;
            goto label_1dbc1d8;
        }
    }
    ctx->pc = 0x1DBC1ACu;
    // 0x1dbc1ac: 0xc76ee64  jal         func_1DBB990
    ctx->pc = 0x1DBC1ACu;
    SET_GPR_U32(ctx, 31, 0x1DBC1B4u);
    ctx->pc = 0x1DBB990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB990u, 0x1DBC1ACu, 0x1DBC1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC1B4u;
label_1dbc1b4:
    // 0x1dbc1b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dbc1b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbc1b8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1dbc1b8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dbc1bc: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1dbc1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1dbc1c0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1dbc1c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1dbc1c4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1dbc1c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbc1c8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBC1C8u;
    {
        const bool branch_taken_0x1dbc1c8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DBC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC1C8u;
        // 0x1dbc1cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbc1c8) {
            ctx->pc = 0x1DBC1DCu;
            goto label_1dbc1dc;
        }
    }
    ctx->pc = 0x1DBC1D0u;
    // 0x1dbc1d0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1dbc1d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbc1d4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1dbc1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1dbc1d8:
    // 0x1dbc1d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbc1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbc1dc:
    // 0x1dbc1dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dbc1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc1e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbc1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbc1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBC1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBC1E4u;
        // 0x1dbc1e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBC1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBC1ECu;
    // 0x1dbc1ec: 0x0  nop
    ctx->pc = 0x1dbc1ecu;
    // NOP
    ctx->pc = 0x1dbc1f0u;
}
