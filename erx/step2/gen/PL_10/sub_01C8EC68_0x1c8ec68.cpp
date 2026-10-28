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

// Function: sub_01C8EC68
// Address: 0x1c8ec68 - 0x1c8ed9c
void sub_01C8EC68_0x1c8ec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8EC68_0x1c8ec68");
#endif

    switch (ctx->pc) {
        case 0x1c8ec84u: goto label_1c8ec84;
        case 0x1c8ec8cu: goto label_1c8ec8c;
        case 0x1c8eca0u: goto label_1c8eca0;
        case 0x1c8eca8u: goto label_1c8eca8;
        case 0x1c8ecacu: goto label_1c8ecac;
        case 0x1c8ece8u: goto label_1c8ece8;
        case 0x1c8ed28u: goto label_1c8ed28;
        case 0x1c8ed3cu: goto label_1c8ed3c;
        case 0x1c8ed48u: goto label_1c8ed48;
        case 0x1c8ed54u: goto label_1c8ed54;
        case 0x1c8ed68u: goto label_1c8ed68;
        case 0x1c8ed80u: goto label_1c8ed80;
        default: break;
    }

    ctx->pc = 0x1c8ec68u;

    // 0x1c8ec68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8ec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8ec6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8ec6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8ec70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8ec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8ec74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8ec74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ec78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8ec7c: 0xc7233d0  jal         func_1C8CF40
    ctx->pc = 0x1C8EC7Cu;
    SET_GPR_U32(ctx, 31, 0x1C8EC84u);
    ctx->pc = 0x1C8EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EC7Cu;
    // 0x1c8ec80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF40u, 0x1C8EC7Cu, 0x1C8EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EC84u;
label_1c8ec84:
    // 0x1c8ec84: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8EC84u;
    SET_GPR_U32(ctx, 31, 0x1C8EC8Cu);
    ctx->pc = 0x1C8EC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EC84u;
    // 0x1c8ec88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8EC84u, 0x1C8EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EC8Cu;
label_1c8ec8c:
    // 0x1c8ec8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8ec8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ec90: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C8EC90u;
    {
        const bool branch_taken_0x1c8ec90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C8EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EC90u;
        // 0x1c8ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ec90) {
            ctx->pc = 0x1C8ECBCu;
            goto label_1c8ecbc;
        }
    }
    ctx->pc = 0x1C8EC98u;
    // 0x1c8ec98: 0xc7233ec  jal         func_1C8CFB0
    ctx->pc = 0x1C8EC98u;
    SET_GPR_U32(ctx, 31, 0x1C8ECA0u);
    ctx->pc = 0x1C8CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CFB0u, 0x1C8EC98u, 0x1C8ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ECA0u;
label_1c8eca0:
    // 0x1c8eca0: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8ECA0u;
    SET_GPR_U32(ctx, 31, 0x1C8ECA8u);
    ctx->pc = 0x1C8ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8ECA0u;
    // 0x1c8eca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8ECA0u, 0x1C8ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ECA8u;
label_1c8eca8:
    // 0x1c8eca8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c8eca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c8ecac:
    // 0x1c8ecac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8ecacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ecb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8ecb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8ecb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8ECB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8ECB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8ECB4u;
        // 0x1c8ecb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8ECB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8ECBCu;
label_1c8ecbc:
    // 0x1c8ecbc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C8ECBCu;
    {
        const bool branch_taken_0x1c8ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8ECBCu;
        // 0x1c8ecc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ecbc) {
            ctx->pc = 0x1C8ECACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8ecac;
        }
    }
    ctx->pc = 0x1C8ECC4u;
    // 0x1c8ecc4: 0x0  nop
    ctx->pc = 0x1c8ecc4u;
    // NOP
    // 0x1c8ecc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8ecc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8eccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8ecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8ecd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8ecd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8ecd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8ecd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ecdc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c8ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c8ece0: 0xc7233d8  jal         func_1C8CF60
    ctx->pc = 0x1C8ECE0u;
    SET_GPR_U32(ctx, 31, 0x1C8ECE8u);
    ctx->pc = 0x1C8ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8ECE0u;
    // 0x1c8ece4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF60u, 0x1C8ECE0u, 0x1C8ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ECE8u;
label_1c8ece8:
    // 0x1c8ece8: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c8ece8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c8ecec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c8ececu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ecf0: 0x25cefff7  addiu       $t6, $t6, -0x9
    ctx->pc = 0x1c8ecf0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
    // 0x1c8ecf4: 0x2dcf0017  sltiu       $t7, $t6, 0x17
    ctx->pc = 0x1c8ecf4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1c8ecf8: 0x11e00030  beqz        $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x1C8ECF8u;
    {
        const bool branch_taken_0x1c8ecf8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8ECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8ECF8u;
        // 0x1c8ecfc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ecf8) {
            ctx->pc = 0x1C8EDBCu;
            return;
        }
    }
    ctx->pc = 0x1C8ED00u;
    // 0x1c8ed00: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1c8ed00u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c8ed04: 0x3c0e01c9  lui         $t6, 0x1C9
    ctx->pc = 0x1c8ed04u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)457 << 16));
    // 0x1c8ed08: 0x25ce01fc  addiu       $t6, $t6, 0x1FC
    ctx->pc = 0x1c8ed08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 508));
    // 0x1c8ed0c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c8ed0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c8ed10: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c8ed10u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c8ed14: 0x1a00008  jr          $t5
    ctx->pc = 0x1C8ED14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8ED1Cu: goto label_1c8ed1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8ED14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C8ED1Cu;
label_1c8ed1c:
    // 0x1c8ed1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ed1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ed20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8ed20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ed24: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1c8ed24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1c8ed28:
    // 0x1c8ed28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8ed28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ed2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8ed2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ed30: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c8ed30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8ed34: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8ED34u;
    SET_GPR_U32(ctx, 31, 0x1C8ED3Cu);
    ctx->pc = 0x1C8ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8ED34u;
    // 0x1c8ed38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8ED34u, 0x1C8ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ED3Cu;
label_1c8ed3c:
    // 0x1c8ed3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ed40: 0xc7233da  jal         func_1C8CF68
    ctx->pc = 0x1C8ED40u;
    SET_GPR_U32(ctx, 31, 0x1C8ED48u);
    ctx->pc = 0x1C8ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8ED40u;
    // 0x1c8ed44: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF68u, 0x1C8ED40u, 0x1C8ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ED48u;
label_1c8ed48:
    // 0x1c8ed48: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c8ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c8ed4c: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8ED4Cu;
    SET_GPR_U32(ctx, 31, 0x1C8ED54u);
    ctx->pc = 0x1C8ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8ED4Cu;
    // 0x1c8ed50: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8ED4Cu, 0x1C8ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ED54u;
label_1c8ed54:
    // 0x1c8ed54: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c8ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c8ed58: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c8ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c8ed5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c8ed5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8ed60: 0xc7233dc  jal         func_1C8CF70
    ctx->pc = 0x1C8ED60u;
    SET_GPR_U32(ctx, 31, 0x1C8ED68u);
    ctx->pc = 0x1C8ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8ED60u;
    // 0x1c8ed64: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF70u, 0x1C8ED60u, 0x1C8ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ED68u;
label_1c8ed68:
    // 0x1c8ed68: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8ed68u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8ed6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c8ed6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8ed70: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c8ed70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c8ed74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ed78: 0xc7233d0  jal         func_1C8CF40
    ctx->pc = 0x1C8ED78u;
    SET_GPR_U32(ctx, 31, 0x1C8ED80u);
    ctx->pc = 0x1C8ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8ED78u;
    // 0x1c8ed7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF40u, 0x1C8ED78u, 0x1C8ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8ED80u;
label_1c8ed80:
    // 0x1c8ed80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ed80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ed84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8ed84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8ed88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8ed88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ed8c: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x1c8ed8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x1c8ed90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8ed90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8ed94: 0x87233de  j           func_1C8CF78
    ctx->pc = 0x1C8ED94u;
    ctx->pc = 0x1C8ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8ED94u;
    // 0x1c8ed98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF78u;
    sub_01C8CF78_0x1c8cf78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8ED9Cu;
}
