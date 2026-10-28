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

// Function: sub_01C8DA40
// Address: 0x1c8da40 - 0x1c8db50
void sub_01C8DA40_0x1c8da40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8DA40_0x1c8da40");
#endif

    switch (ctx->pc) {
        case 0x1c8da5cu: goto label_1c8da5c;
        case 0x1c8da64u: goto label_1c8da64;
        case 0x1c8da78u: goto label_1c8da78;
        case 0x1c8da7cu: goto label_1c8da7c;
        case 0x1c8dad4u: goto label_1c8dad4;
        case 0x1c8dae4u: goto label_1c8dae4;
        case 0x1c8daf8u: goto label_1c8daf8;
        case 0x1c8db0cu: goto label_1c8db0c;
        case 0x1c8db1cu: goto label_1c8db1c;
        default: break;
    }

    ctx->pc = 0x1c8da40u;

    // 0x1c8da40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8da40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8da44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8da44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8da48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8da48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8da4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8da4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8da50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8da54: 0xc7233d0  jal         func_1C8CF40
    ctx->pc = 0x1C8DA54u;
    SET_GPR_U32(ctx, 31, 0x1C8DA5Cu);
    ctx->pc = 0x1C8DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DA54u;
    // 0x1c8da58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF40u, 0x1C8DA54u, 0x1C8DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DA5Cu;
label_1c8da5c:
    // 0x1c8da5c: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8DA5Cu;
    SET_GPR_U32(ctx, 31, 0x1C8DA64u);
    ctx->pc = 0x1C8DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DA5Cu;
    // 0x1c8da60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8DA5Cu, 0x1C8DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DA64u;
label_1c8da64:
    // 0x1c8da64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8da64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8da68: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8DA68u;
    {
        const bool branch_taken_0x1c8da68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C8DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DA68u;
        // 0x1c8da6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8da68) {
            ctx->pc = 0x1C8DA8Cu;
            goto label_1c8da8c;
        }
    }
    ctx->pc = 0x1C8DA70u;
    // 0x1c8da70: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8DA70u;
    SET_GPR_U32(ctx, 31, 0x1C8DA78u);
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8DA70u, 0x1C8DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DA78u;
label_1c8da78:
    // 0x1c8da78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8da78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c8da7c:
    // 0x1c8da7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8da7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8da80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8da80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8da84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8DA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DA84u;
        // 0x1c8da88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8DA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8DA8Cu;
label_1c8da8c:
    // 0x1c8da8c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C8DA8Cu;
    {
        const bool branch_taken_0x1c8da8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8DA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DA8Cu;
        // 0x1c8da90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8da8c) {
            ctx->pc = 0x1C8DA7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8da7c;
        }
    }
    ctx->pc = 0x1C8DA94u;
    // 0x1c8da94: 0x0  nop
    ctx->pc = 0x1c8da94u;
    // NOP
    // 0x1c8da98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c8da98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c8da9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8daa0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c8daa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c8daa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c8daa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c8daa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8daa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8daac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8daacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8dab0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c8dab0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dab4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c8dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c8dab8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c8dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c8dabc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c8dabcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c8dac0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c8dac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c8dac4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c8dac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c8dac8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c8dac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dacc: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8DACCu;
    SET_GPR_U32(ctx, 31, 0x1C8DAD4u);
    ctx->pc = 0x1C8DAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DACCu;
    // 0x1c8dad0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8DACCu, 0x1C8DAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DAD4u;
label_1c8dad4:
    // 0x1c8dad4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8dad8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c8dad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8dadc: 0xc7233d8  jal         func_1C8CF60
    ctx->pc = 0x1C8DADCu;
    SET_GPR_U32(ctx, 31, 0x1C8DAE4u);
    ctx->pc = 0x1C8DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DADCu;
    // 0x1c8dae0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF60u, 0x1C8DADCu, 0x1C8DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DAE4u;
label_1c8dae4:
    // 0x1c8dae4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c8dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c8dae8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c8dae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8daec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8daecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8daf0: 0xc7233da  jal         func_1C8CF68
    ctx->pc = 0x1C8DAF0u;
    SET_GPR_U32(ctx, 31, 0x1C8DAF8u);
    ctx->pc = 0x1C8DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DAF0u;
    // 0x1c8daf4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF68u, 0x1C8DAF0u, 0x1C8DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DAF8u;
label_1c8daf8:
    // 0x1c8daf8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c8daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c8dafc: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c8dafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c8db00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c8db00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8db04: 0xc7233dc  jal         func_1C8CF70
    ctx->pc = 0x1C8DB04u;
    SET_GPR_U32(ctx, 31, 0x1C8DB0Cu);
    ctx->pc = 0x1C8DB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DB04u;
    // 0x1c8db08: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF70u, 0x1C8DB04u, 0x1C8DB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DB0Cu;
label_1c8db0c:
    // 0x1c8db0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8db0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8db10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8db10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8db14: 0xc7233d0  jal         func_1C8CF40
    ctx->pc = 0x1C8DB14u;
    SET_GPR_U32(ctx, 31, 0x1C8DB1Cu);
    ctx->pc = 0x1C8DB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DB14u;
    // 0x1c8db18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF40u, 0x1C8DB14u, 0x1C8DB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8DB1Cu;
label_1c8db1c:
    // 0x1c8db1c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c8db1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c8db20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8db20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8db24: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c8db24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8db28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8db28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8db2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8db2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8db30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c8db30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8db34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c8db34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c8db38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c8db38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8db3c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c8db3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c8db40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c8db40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8db44: 0x87233de  j           func_1C8CF78
    ctx->pc = 0x1C8DB44u;
    ctx->pc = 0x1C8DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DB44u;
    // 0x1c8db48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF78u;
    sub_01C8CF78_0x1c8cf78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8DB4Cu;
    // 0x1c8db4c: 0x0  nop
    ctx->pc = 0x1c8db4cu;
    // NOP
    ctx->pc = 0x1c8db50u;
}
