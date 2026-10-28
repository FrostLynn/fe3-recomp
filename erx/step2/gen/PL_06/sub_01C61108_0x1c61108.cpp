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

// Function: sub_01C61108
// Address: 0x1c61108 - 0x1c6122c
void sub_01C61108_0x1c61108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61108_0x1c61108");
#endif

    switch (ctx->pc) {
        case 0x1c61124u: goto label_1c61124;
        case 0x1c6112cu: goto label_1c6112c;
        case 0x1c61140u: goto label_1c61140;
        case 0x1c61144u: goto label_1c61144;
        case 0x1c61180u: goto label_1c61180;
        case 0x1c611c0u: goto label_1c611c0;
        case 0x1c611d4u: goto label_1c611d4;
        case 0x1c611e0u: goto label_1c611e0;
        case 0x1c611ecu: goto label_1c611ec;
        case 0x1c61200u: goto label_1c61200;
        case 0x1c61210u: goto label_1c61210;
        default: break;
    }

    ctx->pc = 0x1c61108u;

    // 0x1c61108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6110c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6110cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c61110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c61114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61118: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6111c: 0xc717d50  jal         func_1C5F540
    ctx->pc = 0x1C6111Cu;
    SET_GPR_U32(ctx, 31, 0x1C61124u);
    ctx->pc = 0x1C61120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6111Cu;
    // 0x1c61120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F540u, 0x1C6111Cu, 0x1C61124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61124u;
label_1c61124:
    // 0x1c61124: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C61124u;
    SET_GPR_U32(ctx, 31, 0x1C6112Cu);
    ctx->pc = 0x1C61128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61124u;
    // 0x1c61128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C61124u, 0x1C6112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6112Cu;
label_1c6112c:
    // 0x1c6112c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6112cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61130: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C61130u;
    {
        const bool branch_taken_0x1c61130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C61134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61130u;
        // 0x1c61134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61130) {
            ctx->pc = 0x1C61154u;
            goto label_1c61154;
        }
    }
    ctx->pc = 0x1C61138u;
    // 0x1c61138: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C61138u;
    SET_GPR_U32(ctx, 31, 0x1C61140u);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C61138u, 0x1C61140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61140u;
label_1c61140:
    // 0x1c61140: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c61140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c61144:
    // 0x1c61144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c61144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61148: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c61148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6114c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6114Cu;
        // 0x1c61150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61154u;
label_1c61154:
    // 0x1c61154: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C61154u;
    {
        const bool branch_taken_0x1c61154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61154u;
        // 0x1c61158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61154) {
            ctx->pc = 0x1C61144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c61144;
        }
    }
    ctx->pc = 0x1C6115Cu;
    // 0x1c6115c: 0x0  nop
    ctx->pc = 0x1c6115cu;
    // NOP
    // 0x1c61160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c61160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c61164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61168: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c61168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6116c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6116cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c61170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c61170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61174: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c61174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c61178: 0xc717d58  jal         func_1C5F560
    ctx->pc = 0x1C61178u;
    SET_GPR_U32(ctx, 31, 0x1C61180u);
    ctx->pc = 0x1C6117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61178u;
    // 0x1c6117c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F560u, 0x1C61178u, 0x1C61180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61180u;
label_1c61180:
    // 0x1c61180: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c61180u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c61184: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c61184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61188: 0x25cefff3  addiu       $t6, $t6, -0xD
    ctx->pc = 0x1c61188u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967283));
    // 0x1c6118c: 0x2dcf0011  sltiu       $t7, $t6, 0x11
    ctx->pc = 0x1c6118cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1c61190: 0x11e0002a  beqz        $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C61190u;
    {
        const bool branch_taken_0x1c61190 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61190u;
        // 0x1c61194: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61190) {
            ctx->pc = 0x1C6123Cu;
            return;
        }
    }
    ctx->pc = 0x1C61198u;
    // 0x1c61198: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1c61198u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c6119c: 0x3c0e01c6  lui         $t6, 0x1C6
    ctx->pc = 0x1c6119cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
    // 0x1c611a0: 0x25ce28d0  addiu       $t6, $t6, 0x28D0
    ctx->pc = 0x1c611a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 10448));
    // 0x1c611a4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c611a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c611a8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c611a8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c611ac: 0x1a00008  jr          $t5
    ctx->pc = 0x1C611ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C611B4u: goto label_1c611b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C611ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C611B4u;
label_1c611b4:
    // 0x1c611b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c611b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c611b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c611b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c611bc: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1c611bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1c611c0:
    // 0x1c611c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c611c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c611c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c611c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c611c8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c611c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c611cc: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C611CCu;
    SET_GPR_U32(ctx, 31, 0x1C611D4u);
    ctx->pc = 0x1C611D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C611CCu;
    // 0x1c611d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C611CCu, 0x1C611D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C611D4u;
label_1c611d4:
    // 0x1c611d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c611d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c611d8: 0xc717d5a  jal         func_1C5F568
    ctx->pc = 0x1C611D8u;
    SET_GPR_U32(ctx, 31, 0x1C611E0u);
    ctx->pc = 0x1C611DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C611D8u;
    // 0x1c611dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F568u, 0x1C611D8u, 0x1C611E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C611E0u;
label_1c611e0:
    // 0x1c611e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c611e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c611e4: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C611E4u;
    SET_GPR_U32(ctx, 31, 0x1C611ECu);
    ctx->pc = 0x1C611E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C611E4u;
    // 0x1c611e8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C611E4u, 0x1C611ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C611ECu;
label_1c611ec:
    // 0x1c611ec: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c611ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c611f0: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c611f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c611f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c611f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c611f8: 0xc717d5c  jal         func_1C5F570
    ctx->pc = 0x1C611F8u;
    SET_GPR_U32(ctx, 31, 0x1C61200u);
    ctx->pc = 0x1C611FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C611F8u;
    // 0x1c611fc: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F570u, 0x1C611F8u, 0x1C61200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61200u;
label_1c61200:
    // 0x1c61200: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c61200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c61204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61208: 0xc717d50  jal         func_1C5F540
    ctx->pc = 0x1C61208u;
    SET_GPR_U32(ctx, 31, 0x1C61210u);
    ctx->pc = 0x1C6120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61208u;
    // 0x1c6120c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F540u, 0x1C61208u, 0x1C61210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61210u;
label_1c61210:
    // 0x1c61210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c61214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c61218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c61218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6121c: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x1c6121cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1c61220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c61220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c61224: 0x8717d5e  j           func_1C5F578
    ctx->pc = 0x1C61224u;
    ctx->pc = 0x1C61228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61224u;
    // 0x1c61228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F578u;
    sub_01C5F578_0x1c5f578(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6122Cu;
}
