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

// Function: sub_01DCDA90
// Address: 0x1dcda90 - 0x1dcdb98
void sub_01DCDA90_0x1dcda90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCDA90_0x1dcda90");
#endif

    switch (ctx->pc) {
        case 0x1dcdab8u: goto label_1dcdab8;
        case 0x1dcdac8u: goto label_1dcdac8;
        case 0x1dcdadcu: goto label_1dcdadc;
        case 0x1dcdaf0u: goto label_1dcdaf0;
        case 0x1dcdb0cu: goto label_1dcdb0c;
        case 0x1dcdb20u: goto label_1dcdb20;
        default: break;
    }

    ctx->pc = 0x1dcda90u;

    // 0x1dcda90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcda90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcda94: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcda94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcda98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dcda98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dcda9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcda9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcdaa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dcdaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dcdaa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcdaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcdaa8: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcdaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcdaac: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcdaacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcdab0: 0xc773608  jal         func_1DCD820
    ctx->pc = 0x1DCDAB0u;
    SET_GPR_U32(ctx, 31, 0x1DCDAB8u);
    ctx->pc = 0x1DCDAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDAB0u;
    // 0x1dcdab4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD820u, 0x1DCDAB0u, 0x1DCDAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDAB8u;
label_1dcdab8:
    // 0x1dcdab8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdab8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdabc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcdabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdac0: 0xc773606  jal         func_1DCD818
    ctx->pc = 0x1DCDAC0u;
    SET_GPR_U32(ctx, 31, 0x1DCDAC8u);
    ctx->pc = 0x1DCDAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDAC0u;
    // 0x1dcdac4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD818u, 0x1DCDAC0u, 0x1DCDAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDAC8u;
label_1dcdac8:
    // 0x1dcdac8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdac8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdacc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcdaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdad0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dcdad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdad4: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCDAD4u;
    SET_GPR_U32(ctx, 31, 0x1DCDADCu);
    ctx->pc = 0x1DCDAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDAD4u;
    // 0x1dcdad8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCDAD4u, 0x1DCDADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDADCu;
label_1dcdadc:
    // 0x1dcdadc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdadcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdae0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcdae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcdae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdae8: 0xc77360e  jal         func_1DCD838
    ctx->pc = 0x1DCDAE8u;
    SET_GPR_U32(ctx, 31, 0x1DCDAF0u);
    ctx->pc = 0x1DCDAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDAE8u;
    // 0x1dcdaec: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD838u, 0x1DCDAE8u, 0x1DCDAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDAF0u;
label_1dcdaf0:
    // 0x1dcdaf0: 0x8e2e0008  lw          $t6, 0x8($s1)
    ctx->pc = 0x1dcdaf0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dcdaf4: 0x240f001e  addiu       $t7, $zero, 0x1E
    ctx->pc = 0x1dcdaf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dcdaf8: 0x15cf0009  bne         $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DCDAF8u;
    {
        const bool branch_taken_0x1dcdaf8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCDAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDAF8u;
        // 0x1dcdafc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdaf8) {
            ctx->pc = 0x1DCDB20u;
            goto label_1dcdb20;
        }
    }
    ctx->pc = 0x1DCDB00u;
    // 0x1dcdb00: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdb00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdb04: 0xc77360e  jal         func_1DCD838
    ctx->pc = 0x1DCDB04u;
    SET_GPR_U32(ctx, 31, 0x1DCDB0Cu);
    ctx->pc = 0x1DCDB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDB04u;
    // 0x1dcdb08: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD838u, 0x1DCDB04u, 0x1DCDB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDB0Cu;
label_1dcdb0c:
    // 0x1dcdb0c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdb0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdb10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcdb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdb14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcdb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdb18: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCDB18u;
    SET_GPR_U32(ctx, 31, 0x1DCDB20u);
    ctx->pc = 0x1DCDB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDB18u;
    // 0x1dcdb1c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCDB18u, 0x1DCDB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDB20u;
label_1dcdb20:
    // 0x1dcdb20: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dcdb20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdb24: 0x8dae00e0  lw          $t6, 0xE0($t5)
    ctx->pc = 0x1dcdb24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 224)));
    // 0x1dcdb28: 0x8dcf0078  lw          $t7, 0x78($t6)
    ctx->pc = 0x1dcdb28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 120)));
    // 0x1dcdb2c: 0x55f00013  bnel        $t7, $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DCDB2Cu;
    {
        const bool branch_taken_0x1dcdb2c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        if (branch_taken_0x1dcdb2c) {
            ctx->pc = 0x1DCDB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCDB2Cu;
            // 0x1dcdb30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCDB7Cu;
            goto label_1dcdb7c;
        }
    }
    ctx->pc = 0x1DCDB34u;
    // 0x1dcdb34: 0x8dce007c  lw          $t6, 0x7C($t6)
    ctx->pc = 0x1dcdb34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 124)));
    // 0x1dcdb38: 0x240f014d  addiu       $t7, $zero, 0x14D
    ctx->pc = 0x1dcdb38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
    // 0x1dcdb3c: 0x15cf000f  bne         $t6, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x1DCDB3Cu;
    {
        const bool branch_taken_0x1dcdb3c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCDB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDB3Cu;
        // 0x1dcdb40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdb3c) {
            ctx->pc = 0x1DCDB7Cu;
            goto label_1dcdb7c;
        }
    }
    ctx->pc = 0x1DCDB44u;
    // 0x1dcdb44: 0x8e2f081c  lw          $t7, 0x81C($s1)
    ctx->pc = 0x1dcdb44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
    // 0x1dcdb48: 0x15e0000c  bnez        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1DCDB48u;
    {
        const bool branch_taken_0x1dcdb48 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcdb48) {
            ctx->pc = 0x1DCDB7Cu;
            goto label_1dcdb7c;
        }
    }
    ctx->pc = 0x1DCDB50u;
    // 0x1dcdb50: 0x8c4f081c  lw          $t7, 0x81C($v0)
    ctx->pc = 0x1dcdb50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
    // 0x1dcdb54: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1DCDB54u;
    {
        const bool branch_taken_0x1dcdb54 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDB54u;
        // 0x1dcdb58: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdb54) {
            ctx->pc = 0x1DCDB80u;
            goto label_1dcdb80;
        }
    }
    ctx->pc = 0x1DCDB5Cu;
    // 0x1dcdb5c: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1dcdb5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1dcdb60: 0x240f001d  addiu       $t7, $zero, 0x1D
    ctx->pc = 0x1dcdb60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1dcdb64: 0x15cf0006  bne         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCDB64u;
    {
        const bool branch_taken_0x1dcdb64 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dcdb64) {
            ctx->pc = 0x1DCDB80u;
            goto label_1dcdb80;
        }
    }
    ctx->pc = 0x1DCDB6Cu;
    // 0x1dcdb6c: 0x95af056e  lhu         $t7, 0x56E($t5)
    ctx->pc = 0x1dcdb6cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dcdb70: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1dcdb70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1dcdb74: 0xa5af056e  sh          $t7, 0x56E($t5)
    ctx->pc = 0x1dcdb74u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dcdb78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcdb78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcdb7c:
    // 0x1dcdb7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcdb7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1dcdb80:
    // 0x1dcdb80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dcdb80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcdb84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dcdb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcdb88: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDB88u;
        // 0x1dcdb8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDB90u;
    // 0x1dcdb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDB90u;
        // 0x1dcdb94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDB98u;
}
