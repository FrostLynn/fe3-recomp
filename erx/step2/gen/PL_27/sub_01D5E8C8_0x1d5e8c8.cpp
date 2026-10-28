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

// Function: sub_01D5E8C8
// Address: 0x1d5e8c8 - 0x1d5e9d0
void sub_01D5E8C8_0x1d5e8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5E8C8_0x1d5e8c8");
#endif

    switch (ctx->pc) {
        case 0x1d5e8e4u: goto label_1d5e8e4;
        case 0x1d5e8ecu: goto label_1d5e8ec;
        case 0x1d5e900u: goto label_1d5e900;
        case 0x1d5e908u: goto label_1d5e908;
        case 0x1d5e90cu: goto label_1d5e90c;
        case 0x1d5e948u: goto label_1d5e948;
        case 0x1d5e974u: goto label_1d5e974;
        case 0x1d5e980u: goto label_1d5e980;
        case 0x1d5e98cu: goto label_1d5e98c;
        case 0x1d5e9a0u: goto label_1d5e9a0;
        case 0x1d5e9b0u: goto label_1d5e9b0;
        default: break;
    }

    ctx->pc = 0x1d5e8c8u;

    // 0x1d5e8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5e8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5e8cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5e8ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5e8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e8d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5e8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e8d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5e8dc: 0xc757350  jal         func_1D5CD40
    ctx->pc = 0x1D5E8DCu;
    SET_GPR_U32(ctx, 31, 0x1D5E8E4u);
    ctx->pc = 0x1D5E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E8DCu;
    // 0x1d5e8e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD40u, 0x1D5E8DCu, 0x1D5E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E8E4u;
label_1d5e8e4:
    // 0x1d5e8e4: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5E8E4u;
    SET_GPR_U32(ctx, 31, 0x1D5E8ECu);
    ctx->pc = 0x1D5E8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E8E4u;
    // 0x1d5e8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5E8E4u, 0x1D5E8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E8ECu;
label_1d5e8ec:
    // 0x1d5e8ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5e8ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e8f0: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5E8F0u;
    {
        const bool branch_taken_0x1d5e8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5E8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E8F0u;
        // 0x1d5e8f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e8f0) {
            ctx->pc = 0x1D5E91Cu;
            goto label_1d5e91c;
        }
    }
    ctx->pc = 0x1D5E8F8u;
    // 0x1d5e8f8: 0xc75736c  jal         func_1D5CDB0
    ctx->pc = 0x1D5E8F8u;
    SET_GPR_U32(ctx, 31, 0x1D5E900u);
    ctx->pc = 0x1D5CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CDB0u, 0x1D5E8F8u, 0x1D5E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E900u;
label_1d5e900:
    // 0x1d5e900: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5E900u;
    SET_GPR_U32(ctx, 31, 0x1D5E908u);
    ctx->pc = 0x1D5E904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E900u;
    // 0x1d5e904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5E900u, 0x1D5E908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E908u;
label_1d5e908:
    // 0x1d5e908: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5e908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d5e90c:
    // 0x1d5e90c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e90cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e910: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5e910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e914: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E914u;
        // 0x1d5e918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E91Cu;
label_1d5e91c:
    // 0x1d5e91c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5E91Cu;
    {
        const bool branch_taken_0x1d5e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E91Cu;
        // 0x1d5e920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e91c) {
            ctx->pc = 0x1D5E90Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5e90c;
        }
    }
    ctx->pc = 0x1D5E924u;
    // 0x1d5e924: 0x0  nop
    ctx->pc = 0x1d5e924u;
    // NOP
    // 0x1d5e928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5e928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5e92c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5e930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5e934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5e938: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5e938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e93c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d5e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5e940: 0xc757358  jal         func_1D5CD60
    ctx->pc = 0x1D5E940u;
    SET_GPR_U32(ctx, 31, 0x1D5E948u);
    ctx->pc = 0x1D5E944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E940u;
    // 0x1d5e944: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD60u, 0x1D5E940u, 0x1D5E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E948u;
label_1d5e948:
    // 0x1d5e948: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5e948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5e94c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5e94cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5e950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e954: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d5e954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5e958: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5e958u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e95c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d5e95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e960: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5e960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5e968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e96c: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5E96Cu;
    SET_GPR_U32(ctx, 31, 0x1D5E974u);
    ctx->pc = 0x1D5E970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E96Cu;
    // 0x1d5e970: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5E96Cu, 0x1D5E974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E974u;
label_1d5e974:
    // 0x1d5e974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e978: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5E978u;
    SET_GPR_U32(ctx, 31, 0x1D5E980u);
    ctx->pc = 0x1D5E97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E978u;
    // 0x1d5e97c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5E978u, 0x1D5E980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E980u;
label_1d5e980:
    // 0x1d5e980: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5e980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5e984: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5E984u;
    SET_GPR_U32(ctx, 31, 0x1D5E98Cu);
    ctx->pc = 0x1D5E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E984u;
    // 0x1d5e988: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5E984u, 0x1D5E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E98Cu;
label_1d5e98c:
    // 0x1d5e98c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d5e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d5e990: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5e990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e994: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d5e994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5e998: 0xc75735c  jal         func_1D5CD70
    ctx->pc = 0x1D5E998u;
    SET_GPR_U32(ctx, 31, 0x1D5E9A0u);
    ctx->pc = 0x1D5E99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E998u;
    // 0x1d5e99c: 0x240500f7  addiu       $a1, $zero, 0xF7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD70u, 0x1D5E998u, 0x1D5E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E9A0u;
label_1d5e9a0:
    // 0x1d5e9a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5e9a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5e9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e9a8: 0xc757350  jal         func_1D5CD40
    ctx->pc = 0x1D5E9A8u;
    SET_GPR_U32(ctx, 31, 0x1D5E9B0u);
    ctx->pc = 0x1D5E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E9A8u;
    // 0x1d5e9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD40u, 0x1D5E9A8u, 0x1D5E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E9B0u;
label_1d5e9b0:
    // 0x1d5e9b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e9b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5e9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e9bc: 0x24050095  addiu       $a1, $zero, 0x95
    ctx->pc = 0x1d5e9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    // 0x1d5e9c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5e9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5e9c4: 0x875735e  j           func_1D5CD78
    ctx->pc = 0x1D5E9C4u;
    ctx->pc = 0x1D5E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E9C4u;
    // 0x1d5e9c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD78u;
    sub_01D5CD78_0x1d5cd78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5E9CCu;
    // 0x1d5e9cc: 0x0  nop
    ctx->pc = 0x1d5e9ccu;
    // NOP
    ctx->pc = 0x1d5e9d0u;
}
