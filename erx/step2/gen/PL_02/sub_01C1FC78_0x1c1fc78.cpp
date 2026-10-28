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

// Function: sub_01C1FC78
// Address: 0x1c1fc78 - 0x1c1fd88
void sub_01C1FC78_0x1c1fc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FC78_0x1c1fc78");
#endif

    switch (ctx->pc) {
        case 0x1c1fc94u: goto label_1c1fc94;
        case 0x1c1fc9cu: goto label_1c1fc9c;
        case 0x1c1fcb0u: goto label_1c1fcb0;
        case 0x1c1fcb4u: goto label_1c1fcb4;
        case 0x1c1fd0cu: goto label_1c1fd0c;
        case 0x1c1fd1cu: goto label_1c1fd1c;
        case 0x1c1fd30u: goto label_1c1fd30;
        case 0x1c1fd44u: goto label_1c1fd44;
        case 0x1c1fd54u: goto label_1c1fd54;
        default: break;
    }

    ctx->pc = 0x1c1fc78u;

    // 0x1c1fc78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1fc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1fc7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c1fc7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1fc80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1fc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1fc84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1fc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fc88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1fc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1fc8c: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C1FC8Cu;
    SET_GPR_U32(ctx, 31, 0x1C1FC94u);
    ctx->pc = 0x1C1FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FC8Cu;
    // 0x1c1fc90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C1FC8Cu, 0x1C1FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FC94u;
label_1c1fc94:
    // 0x1c1fc94: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C1FC94u;
    SET_GPR_U32(ctx, 31, 0x1C1FC9Cu);
    ctx->pc = 0x1C1FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FC94u;
    // 0x1c1fc98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C1FC94u, 0x1C1FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FC9Cu;
label_1c1fc9c:
    // 0x1c1fc9c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c1fc9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1fca0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1FCA0u;
    {
        const bool branch_taken_0x1c1fca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C1FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FCA0u;
        // 0x1c1fca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fca0) {
            ctx->pc = 0x1C1FCC4u;
            goto label_1c1fcc4;
        }
    }
    ctx->pc = 0x1C1FCA8u;
    // 0x1c1fca8: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C1FCA8u;
    SET_GPR_U32(ctx, 31, 0x1C1FCB0u);
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C1FCA8u, 0x1C1FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FCB0u;
label_1c1fcb0:
    // 0x1c1fcb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c1fcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c1fcb4:
    // 0x1c1fcb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1fcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fcb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1fcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1fcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FCBCu;
        // 0x1c1fcc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1FCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1FCC4u;
label_1c1fcc4:
    // 0x1c1fcc4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C1FCC4u;
    {
        const bool branch_taken_0x1c1fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FCC4u;
        // 0x1c1fcc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fcc4) {
            ctx->pc = 0x1C1FCB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1fcb4;
        }
    }
    ctx->pc = 0x1C1FCCCu;
    // 0x1c1fccc: 0x0  nop
    ctx->pc = 0x1c1fcccu;
    // NOP
    // 0x1c1fcd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c1fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c1fcd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1fcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1fcd8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c1fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c1fcdc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c1fcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c1fce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1fce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1fce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1fce8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c1fce8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fcec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1fcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c1fcf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c1fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c1fcf4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c1fcf4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c1fcf8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c1fcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c1fcfc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c1fcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c1fd00: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c1fd00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fd04: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C1FD04u;
    SET_GPR_U32(ctx, 31, 0x1C1FD0Cu);
    ctx->pc = 0x1C1FD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FD04u;
    // 0x1c1fd08: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C1FD04u, 0x1C1FD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FD0Cu;
label_1c1fd0c:
    // 0x1c1fd0c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c1fd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c1fd10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c1fd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fd14: 0xc707c5c  jal         func_1C1F170
    ctx->pc = 0x1C1FD14u;
    SET_GPR_U32(ctx, 31, 0x1C1FD1Cu);
    ctx->pc = 0x1C1FD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FD14u;
    // 0x1c1fd18: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F170u, 0x1C1FD14u, 0x1C1FD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FD1Cu;
label_1c1fd1c:
    // 0x1c1fd1c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c1fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c1fd20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c1fd20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fd24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1fd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fd28: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C1FD28u;
    SET_GPR_U32(ctx, 31, 0x1C1FD30u);
    ctx->pc = 0x1C1FD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FD28u;
    // 0x1c1fd2c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C1FD28u, 0x1C1FD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FD30u;
label_1c1fd30:
    // 0x1c1fd30: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c1fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c1fd34: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c1fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c1fd38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c1fd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fd3c: 0xc707c60  jal         func_1C1F180
    ctx->pc = 0x1C1FD3Cu;
    SET_GPR_U32(ctx, 31, 0x1C1FD44u);
    ctx->pc = 0x1C1FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FD3Cu;
    // 0x1c1fd40: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F180u, 0x1C1FD3Cu, 0x1C1FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FD44u;
label_1c1fd44:
    // 0x1c1fd44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c1fd44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1fd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1fd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fd4c: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C1FD4Cu;
    SET_GPR_U32(ctx, 31, 0x1C1FD54u);
    ctx->pc = 0x1C1FD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FD4Cu;
    // 0x1c1fd50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C1FD4Cu, 0x1C1FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FD54u;
label_1c1fd54:
    // 0x1c1fd54: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c1fd54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c1fd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1fd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fd5c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c1fd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fd60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1fd60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1fd64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1fd64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1fd68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1fd68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1fd6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c1fd6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c1fd70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c1fd70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1fd74: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c1fd74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1fd78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c1fd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1fd7c: 0x8707c62  j           func_1C1F188
    ctx->pc = 0x1C1FD7Cu;
    ctx->pc = 0x1C1FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FD7Cu;
    // 0x1c1fd80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F188u;
    sub_01C1F188_0x1c1f188(rdram, ctx, runtime); return;
    ctx->pc = 0x1C1FD84u;
    // 0x1c1fd84: 0x0  nop
    ctx->pc = 0x1c1fd84u;
    // NOP
    ctx->pc = 0x1c1fd88u;
}
