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

// Function: sub_01C21E78
// Address: 0x1c21e78 - 0x1c21f84
void sub_01C21E78_0x1c21e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21E78_0x1c21e78");
#endif

    switch (ctx->pc) {
        case 0x1c21e98u: goto label_1c21e98;
        case 0x1c21ea8u: goto label_1c21ea8;
        case 0x1c21eb4u: goto label_1c21eb4;
        case 0x1c21ec4u: goto label_1c21ec4;
        case 0x1c21ed0u: goto label_1c21ed0;
        case 0x1c21f18u: goto label_1c21f18;
        case 0x1c21f2cu: goto label_1c21f2c;
        case 0x1c21f38u: goto label_1c21f38;
        case 0x1c21f48u: goto label_1c21f48;
        case 0x1c21f58u: goto label_1c21f58;
        case 0x1c21f68u: goto label_1c21f68;
        default: break;
    }

    ctx->pc = 0x1c21e78u;

    // 0x1c21e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c21e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c21e7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c21e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c21e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21e84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c21e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c21e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c21e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e8c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c21e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c21e90: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21E90u;
    SET_GPR_U32(ctx, 31, 0x1C21E98u);
    ctx->pc = 0x1C21E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21E90u;
    // 0x1c21e94: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21E90u, 0x1C21E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21E98u;
label_1c21e98:
    // 0x1c21e98: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c21e98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c21e9c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c21e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c21ea0: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C21EA0u;
    SET_GPR_U32(ctx, 31, 0x1C21EA8u);
    ctx->pc = 0x1C21EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21EA0u;
    // 0x1c21ea4: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C21EA0u, 0x1C21EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21EA8u;
label_1c21ea8:
    // 0x1c21ea8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c21ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c21eac: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21EACu;
    SET_GPR_U32(ctx, 31, 0x1C21EB4u);
    ctx->pc = 0x1C21EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21EACu;
    // 0x1c21eb0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21EACu, 0x1C21EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21EB4u;
label_1c21eb4:
    // 0x1c21eb4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c21eb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c21eb8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c21eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c21ebc: 0xc707f16  jal         func_1C1FC58
    ctx->pc = 0x1C21EBCu;
    SET_GPR_U32(ctx, 31, 0x1C21EC4u);
    ctx->pc = 0x1C21EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21EBCu;
    // 0x1c21ec0: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC58u, 0x1C21EBCu, 0x1C21EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21EC4u;
label_1c21ec4:
    // 0x1c21ec4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c21ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c21ec8: 0xc707c5c  jal         func_1C1F170
    ctx->pc = 0x1C21EC8u;
    SET_GPR_U32(ctx, 31, 0x1C21ED0u);
    ctx->pc = 0x1C21ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21EC8u;
    // 0x1c21ecc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F170u, 0x1C21EC8u, 0x1C21ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21ED0u;
label_1c21ed0:
    // 0x1c21ed0: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1c21ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c21ed4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c21ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21ed8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c21ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c21edc: 0x25eefff5  addiu       $t6, $t7, -0xB
    ctx->pc = 0x1c21edcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967285));
    // 0x1c21ee0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c21ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c21ee4: 0x2dcf0015  sltiu       $t7, $t6, 0x15
    ctx->pc = 0x1c21ee4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1c21ee8: 0x11e00026  beqz        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1C21EE8u;
    {
        const bool branch_taken_0x1c21ee8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21EE8u;
        // 0x1c21eec: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21ee8) {
            ctx->pc = 0x1C21F84u;
            return;
        }
    }
    ctx->pc = 0x1C21EF0u;
    // 0x1c21ef0: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1c21ef0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c21ef4: 0x3c0e01c2  lui         $t6, 0x1C2
    ctx->pc = 0x1c21ef4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)450 << 16));
    // 0x1c21ef8: 0x25ce32f0  addiu       $t6, $t6, 0x32F0
    ctx->pc = 0x1c21ef8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13040));
    // 0x1c21efc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c21efcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c21f00: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c21f00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c21f04: 0x1a00008  jr          $t5
    ctx->pc = 0x1C21F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C21F0Cu: goto label_1c21f0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21F04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C21F0Cu;
label_1c21f0c:
    // 0x1c21f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f14: 0x240601d8  addiu       $a2, $zero, 0x1D8
    ctx->pc = 0x1c21f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
label_1c21f18:
    // 0x1c21f18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c21f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21f1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c21f1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f20: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c21f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21f24: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C21F24u;
    SET_GPR_U32(ctx, 31, 0x1C21F2Cu);
    ctx->pc = 0x1C21F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21F24u;
    // 0x1c21f28: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C21F24u, 0x1C21F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21F2Cu;
label_1c21f2c:
    // 0x1c21f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f30: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C21F30u;
    SET_GPR_U32(ctx, 31, 0x1C21F38u);
    ctx->pc = 0x1C21F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21F30u;
    // 0x1c21f34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C21F30u, 0x1C21F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21F38u;
label_1c21f38:
    // 0x1c21f38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c21f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21f3c: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c21f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c21f40: 0xc707c60  jal         func_1C1F180
    ctx->pc = 0x1C21F40u;
    SET_GPR_U32(ctx, 31, 0x1C21F48u);
    ctx->pc = 0x1C21F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21F40u;
    // 0x1c21f44: 0x2405011f  addiu       $a1, $zero, 0x11F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F180u, 0x1C21F40u, 0x1C21F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21F48u;
label_1c21f48:
    // 0x1c21f48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c21f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c21f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f50: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C21F50u;
    SET_GPR_U32(ctx, 31, 0x1C21F58u);
    ctx->pc = 0x1C21F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21F50u;
    // 0x1c21f54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C21F50u, 0x1C21F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21F58u;
label_1c21f58:
    // 0x1c21f58: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x1c21f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x1c21f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f60: 0xc707c6e  jal         func_1C1F1B8
    ctx->pc = 0x1C21F60u;
    SET_GPR_U32(ctx, 31, 0x1C21F68u);
    ctx->pc = 0x1C21F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21F60u;
    // 0x1c21f64: 0x24a58d70  addiu       $a1, $a1, -0x7290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1B8u, 0x1C21F60u, 0x1C21F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21F68u;
label_1c21f68:
    // 0x1c21f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c21f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c21f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c21f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21f74: 0x240500bb  addiu       $a1, $zero, 0xBB
    ctx->pc = 0x1c21f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 187));
    // 0x1c21f78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c21f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c21f7c: 0x8707c62  j           func_1C1F188
    ctx->pc = 0x1C21F7Cu;
    ctx->pc = 0x1C21F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21F7Cu;
    // 0x1c21f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F188u;
    sub_01C1F188_0x1c1f188(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21F84u;
}
