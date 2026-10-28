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

// Function: sub_01D70BD8
// Address: 0x1d70bd8 - 0x1d70ce0
void sub_01D70BD8_0x1d70bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70BD8_0x1d70bd8");
#endif

    switch (ctx->pc) {
        case 0x1d70bf4u: goto label_1d70bf4;
        case 0x1d70bfcu: goto label_1d70bfc;
        case 0x1d70c10u: goto label_1d70c10;
        case 0x1d70c18u: goto label_1d70c18;
        case 0x1d70c1cu: goto label_1d70c1c;
        case 0x1d70c58u: goto label_1d70c58;
        case 0x1d70c84u: goto label_1d70c84;
        case 0x1d70c90u: goto label_1d70c90;
        case 0x1d70c9cu: goto label_1d70c9c;
        case 0x1d70cb0u: goto label_1d70cb0;
        case 0x1d70cc0u: goto label_1d70cc0;
        default: break;
    }

    ctx->pc = 0x1d70bd8u;

    // 0x1d70bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d70bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d70bdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d70bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d70be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d70be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d70be4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d70be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d70be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d70bec: 0xc75c006  jal         func_1D70018
    ctx->pc = 0x1D70BECu;
    SET_GPR_U32(ctx, 31, 0x1D70BF4u);
    ctx->pc = 0x1D70BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70BECu;
    // 0x1d70bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70018u, 0x1D70BECu, 0x1D70BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70BF4u;
label_1d70bf4:
    // 0x1d70bf4: 0xc75c008  jal         func_1D70020
    ctx->pc = 0x1D70BF4u;
    SET_GPR_U32(ctx, 31, 0x1D70BFCu);
    ctx->pc = 0x1D70BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70BF4u;
    // 0x1d70bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70020u, 0x1D70BF4u, 0x1D70BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70BFCu;
label_1d70bfc:
    // 0x1d70bfc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d70bfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70c00: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D70C00u;
    {
        const bool branch_taken_0x1d70c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D70C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70C00u;
        // 0x1d70c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70c00) {
            ctx->pc = 0x1D70C2Cu;
            goto label_1d70c2c;
        }
    }
    ctx->pc = 0x1D70C08u;
    // 0x1d70c08: 0xc75c020  jal         func_1D70080
    ctx->pc = 0x1D70C08u;
    SET_GPR_U32(ctx, 31, 0x1D70C10u);
    ctx->pc = 0x1D70080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70080u, 0x1D70C08u, 0x1D70C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70C10u;
label_1d70c10:
    // 0x1d70c10: 0xc75c00a  jal         func_1D70028
    ctx->pc = 0x1D70C10u;
    SET_GPR_U32(ctx, 31, 0x1D70C18u);
    ctx->pc = 0x1D70C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70C10u;
    // 0x1d70c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70028u, 0x1D70C10u, 0x1D70C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70C18u;
label_1d70c18:
    // 0x1d70c18: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d70c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d70c1c:
    // 0x1d70c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70c20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d70c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70c24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D70C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D70C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70C24u;
        // 0x1d70c28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D70C2Cu;
label_1d70c2c:
    // 0x1d70c2c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D70C2Cu;
    {
        const bool branch_taken_0x1d70c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70C2Cu;
        // 0x1d70c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70c2c) {
            ctx->pc = 0x1D70C1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d70c1c;
        }
    }
    ctx->pc = 0x1D70C34u;
    // 0x1d70c34: 0x0  nop
    ctx->pc = 0x1d70c34u;
    // NOP
    // 0x1d70c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d70c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d70c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d70c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d70c40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d70c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d70c44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d70c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d70c48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d70c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70c4c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d70c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d70c50: 0xc75c00e  jal         func_1D70038
    ctx->pc = 0x1D70C50u;
    SET_GPR_U32(ctx, 31, 0x1D70C58u);
    ctx->pc = 0x1D70C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70C50u;
    // 0x1d70c54: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70038u, 0x1D70C50u, 0x1D70C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70C58u;
label_1d70c58:
    // 0x1d70c58: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d70c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d70c5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d70c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70c60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d70c60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70c64: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d70c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d70c68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d70c68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d70c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70c70: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d70c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d70c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70c78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d70c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70c7c: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D70C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D70C84u);
    ctx->pc = 0x1D70C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70C7Cu;
    // 0x1d70c80: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D70C7Cu, 0x1D70C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70C84u;
label_1d70c84:
    // 0x1d70c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70c88: 0xc75c010  jal         func_1D70040
    ctx->pc = 0x1D70C88u;
    SET_GPR_U32(ctx, 31, 0x1D70C90u);
    ctx->pc = 0x1D70C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70C88u;
    // 0x1d70c8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70040u, 0x1D70C88u, 0x1D70C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70C90u;
label_1d70c90:
    // 0x1d70c90: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d70c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d70c94: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D70C94u;
    SET_GPR_U32(ctx, 31, 0x1D70C9Cu);
    ctx->pc = 0x1D70C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70C94u;
    // 0x1d70c98: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D70C94u, 0x1D70C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70C9Cu;
label_1d70c9c:
    // 0x1d70c9c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d70c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d70ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d70ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70ca4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d70ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d70ca8: 0xc75c012  jal         func_1D70048
    ctx->pc = 0x1D70CA8u;
    SET_GPR_U32(ctx, 31, 0x1D70CB0u);
    ctx->pc = 0x1D70CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70CA8u;
    // 0x1d70cac: 0x240500fd  addiu       $a1, $zero, 0xFD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70048u, 0x1D70CA8u, 0x1D70CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70CB0u;
label_1d70cb0:
    // 0x1d70cb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d70cb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d70cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70cb8: 0xc75c006  jal         func_1D70018
    ctx->pc = 0x1D70CB8u;
    SET_GPR_U32(ctx, 31, 0x1D70CC0u);
    ctx->pc = 0x1D70CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70CB8u;
    // 0x1d70cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70018u, 0x1D70CB8u, 0x1D70CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70CC0u;
label_1d70cc0:
    // 0x1d70cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70cc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d70cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70ccc: 0x2405009b  addiu       $a1, $zero, 0x9B
    ctx->pc = 0x1d70cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x1d70cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d70cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d70cd4: 0x875c014  j           func_1D70050
    ctx->pc = 0x1D70CD4u;
    ctx->pc = 0x1D70CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70CD4u;
    // 0x1d70cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70050u;
    sub_01D70050_0x1d70050(rdram, ctx, runtime); return;
    ctx->pc = 0x1D70CDCu;
    // 0x1d70cdc: 0x0  nop
    ctx->pc = 0x1d70cdcu;
    // NOP
    ctx->pc = 0x1d70ce0u;
}
