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

// Function: sub_01C8EB48
// Address: 0x1c8eb48 - 0x1c8ec50
void sub_01C8EB48_0x1c8eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8EB48_0x1c8eb48");
#endif

    switch (ctx->pc) {
        case 0x1c8eb64u: goto label_1c8eb64;
        case 0x1c8eb6cu: goto label_1c8eb6c;
        case 0x1c8eb80u: goto label_1c8eb80;
        case 0x1c8eb88u: goto label_1c8eb88;
        case 0x1c8eb8cu: goto label_1c8eb8c;
        case 0x1c8ebc8u: goto label_1c8ebc8;
        case 0x1c8ebf4u: goto label_1c8ebf4;
        case 0x1c8ec00u: goto label_1c8ec00;
        case 0x1c8ec0cu: goto label_1c8ec0c;
        case 0x1c8ec20u: goto label_1c8ec20;
        case 0x1c8ec30u: goto label_1c8ec30;
        default: break;
    }

    ctx->pc = 0x1c8eb48u;

    // 0x1c8eb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8eb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8eb4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8eb4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8eb50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8eb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8eb54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8eb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eb58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8eb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8eb5c: 0xc7233d0  jal         func_1C8CF40
    ctx->pc = 0x1C8EB5Cu;
    SET_GPR_U32(ctx, 31, 0x1C8EB64u);
    ctx->pc = 0x1C8EB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EB5Cu;
    // 0x1c8eb60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF40u, 0x1C8EB5Cu, 0x1C8EB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EB64u;
label_1c8eb64:
    // 0x1c8eb64: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8EB64u;
    SET_GPR_U32(ctx, 31, 0x1C8EB6Cu);
    ctx->pc = 0x1C8EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EB64u;
    // 0x1c8eb68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8EB64u, 0x1C8EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EB6Cu;
label_1c8eb6c:
    // 0x1c8eb6c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8eb6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8eb70: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8EB70u;
    {
        const bool branch_taken_0x1c8eb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C8EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EB70u;
        // 0x1c8eb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eb70) {
            ctx->pc = 0x1C8EB9Cu;
            goto label_1c8eb9c;
        }
    }
    ctx->pc = 0x1C8EB78u;
    // 0x1c8eb78: 0xc7233ec  jal         func_1C8CFB0
    ctx->pc = 0x1C8EB78u;
    SET_GPR_U32(ctx, 31, 0x1C8EB80u);
    ctx->pc = 0x1C8CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CFB0u, 0x1C8EB78u, 0x1C8EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EB80u;
label_1c8eb80:
    // 0x1c8eb80: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8EB80u;
    SET_GPR_U32(ctx, 31, 0x1C8EB88u);
    ctx->pc = 0x1C8EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EB80u;
    // 0x1c8eb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8EB80u, 0x1C8EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EB88u;
label_1c8eb88:
    // 0x1c8eb88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8eb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c8eb8c:
    // 0x1c8eb8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8eb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8eb90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8eb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8eb94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8EB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EB94u;
        // 0x1c8eb98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8EB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8EB9Cu;
label_1c8eb9c:
    // 0x1c8eb9c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C8EB9Cu;
    {
        const bool branch_taken_0x1c8eb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EB9Cu;
        // 0x1c8eba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eb9c) {
            ctx->pc = 0x1C8EB8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8eb8c;
        }
    }
    ctx->pc = 0x1C8EBA4u;
    // 0x1c8eba4: 0x0  nop
    ctx->pc = 0x1c8eba4u;
    // NOP
    // 0x1c8eba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8eba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8ebac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8ebb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8ebb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8ebb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8ebb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8ebb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ebbc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c8ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c8ebc0: 0xc7233d8  jal         func_1C8CF60
    ctx->pc = 0x1C8EBC0u;
    SET_GPR_U32(ctx, 31, 0x1C8EBC8u);
    ctx->pc = 0x1C8EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EBC0u;
    // 0x1c8ebc4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF60u, 0x1C8EBC0u, 0x1C8EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EBC8u;
label_1c8ebc8:
    // 0x1c8ebc8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c8ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c8ebcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8ebccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ebd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8ebd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ebd4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c8ebd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8ebd8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8ebd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ebdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c8ebdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ebe0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c8ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8ebe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ebe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ebe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8ebe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ebec: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8EBECu;
    SET_GPR_U32(ctx, 31, 0x1C8EBF4u);
    ctx->pc = 0x1C8EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EBECu;
    // 0x1c8ebf0: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8EBECu, 0x1C8EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EBF4u;
label_1c8ebf4:
    // 0x1c8ebf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ebf8: 0xc7233da  jal         func_1C8CF68
    ctx->pc = 0x1C8EBF8u;
    SET_GPR_U32(ctx, 31, 0x1C8EC00u);
    ctx->pc = 0x1C8EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EBF8u;
    // 0x1c8ebfc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF68u, 0x1C8EBF8u, 0x1C8EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EC00u;
label_1c8ec00:
    // 0x1c8ec00: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8ec04: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8EC04u;
    SET_GPR_U32(ctx, 31, 0x1C8EC0Cu);
    ctx->pc = 0x1C8EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EC04u;
    // 0x1c8ec08: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8EC04u, 0x1C8EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EC0Cu;
label_1c8ec0c:
    // 0x1c8ec0c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c8ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c8ec10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8ec10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ec14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c8ec14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8ec18: 0xc7233dc  jal         func_1C8CF70
    ctx->pc = 0x1C8EC18u;
    SET_GPR_U32(ctx, 31, 0x1C8EC20u);
    ctx->pc = 0x1C8EC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EC18u;
    // 0x1c8ec1c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF70u, 0x1C8EC18u, 0x1C8EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EC20u;
label_1c8ec20:
    // 0x1c8ec20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8ec20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8ec24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ec28: 0xc7233d0  jal         func_1C8CF40
    ctx->pc = 0x1C8EC28u;
    SET_GPR_U32(ctx, 31, 0x1C8EC30u);
    ctx->pc = 0x1C8EC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EC28u;
    // 0x1c8ec2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF40u, 0x1C8EC28u, 0x1C8EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EC30u;
label_1c8ec30:
    // 0x1c8ec30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ec30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ec34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8ec34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8ec38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8ec38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ec3c: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x1c8ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x1c8ec40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8ec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8ec44: 0x87233de  j           func_1C8CF78
    ctx->pc = 0x1C8EC44u;
    ctx->pc = 0x1C8EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EC44u;
    // 0x1c8ec48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF78u;
    sub_01C8CF78_0x1c8cf78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8EC4Cu;
    // 0x1c8ec4c: 0x0  nop
    ctx->pc = 0x1c8ec4cu;
    // NOP
    ctx->pc = 0x1c8ec50u;
}
