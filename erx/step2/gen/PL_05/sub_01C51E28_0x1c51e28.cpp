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

// Function: sub_01C51E28
// Address: 0x1c51e28 - 0x1c51f60
void sub_01C51E28_0x1c51e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51E28_0x1c51e28");
#endif

    switch (ctx->pc) {
        case 0x1c51e48u: goto label_1c51e48;
        case 0x1c51e5cu: goto label_1c51e5c;
        case 0x1c51e60u: goto label_1c51e60;
        case 0x1c51e7cu: goto label_1c51e7c;
        case 0x1c51e8cu: goto label_1c51e8c;
        case 0x1c51ed8u: goto label_1c51ed8;
        case 0x1c51f14u: goto label_1c51f14;
        case 0x1c51f20u: goto label_1c51f20;
        case 0x1c51f30u: goto label_1c51f30;
        case 0x1c51f48u: goto label_1c51f48;
        default: break;
    }

    ctx->pc = 0x1c51e28u;

    // 0x1c51e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c51e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c51e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51e30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c51e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c51e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c51e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c51e38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c51e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51e3c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c51e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c51e40: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51E40u;
    SET_GPR_U32(ctx, 31, 0x1C51E48u);
    ctx->pc = 0x1C51E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51E40u;
    // 0x1c51e44: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51E40u, 0x1C51E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51E48u;
label_1c51e48:
    // 0x1c51e48: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c51e48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c51e4c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C51E4Cu;
    {
        const bool branch_taken_0x1c51e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51E4Cu;
        // 0x1c51e50: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51e4c) {
            ctx->pc = 0x1C51E98u;
            goto label_1c51e98;
        }
    }
    ctx->pc = 0x1C51E54u;
    // 0x1c51e54: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C51E54u;
    {
        const bool branch_taken_0x1c51e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c51e54) {
            ctx->pc = 0x1C51E74u;
            goto label_1c51e74;
        }
    }
    ctx->pc = 0x1C51E5Cu;
label_1c51e5c:
    // 0x1c51e5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c51e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c51e60:
    // 0x1c51e60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51e60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51e64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c51e64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51e68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c51e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51E6Cu;
        // 0x1c51e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51E74u;
label_1c51e74:
    // 0x1c51e74: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C51E74u;
    SET_GPR_U32(ctx, 31, 0x1C51E7Cu);
    ctx->pc = 0x1C51E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51E74u;
    // 0x1c51e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C51E74u, 0x1C51E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51E7Cu;
label_1c51e7c:
    // 0x1c51e7c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C51E7Cu;
    {
        const bool branch_taken_0x1c51e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C51E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51E7Cu;
        // 0x1c51e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51e7c) {
            ctx->pc = 0x1C51E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51e5c;
        }
    }
    ctx->pc = 0x1C51E84u;
    // 0x1c51e84: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C51E84u;
    SET_GPR_U32(ctx, 31, 0x1C51E8Cu);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C51E84u, 0x1C51E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51E8Cu;
label_1c51e8c:
    // 0x1c51e8c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C51E8Cu;
    {
        const bool branch_taken_0x1c51e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51E8Cu;
        // 0x1c51e90: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51e8c) {
            ctx->pc = 0x1C51E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51e60;
        }
    }
    ctx->pc = 0x1C51E94u;
    // 0x1c51e94: 0x0  nop
    ctx->pc = 0x1c51e94u;
    // NOP
label_1c51e98:
    // 0x1c51e98: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c51e98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c51e9c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C51E9Cu;
    {
        const bool branch_taken_0x1c51e9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C51EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51E9Cu;
        // 0x1c51ea0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51e9c) {
            ctx->pc = 0x1C51E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51e60;
        }
    }
    ctx->pc = 0x1C51EA4u;
    // 0x1c51ea4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c51ea4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c51ea8: 0x3c0e01c6  lui         $t6, 0x1C6
    ctx->pc = 0x1c51ea8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
    // 0x1c51eac: 0x25ce9a10  addiu       $t6, $t6, -0x65F0
    ctx->pc = 0x1c51eacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294941200));
    // 0x1c51eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c51eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51eb4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c51eb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c51eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c51eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51ebc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c51ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c51ec0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c51ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51ec4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c51ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c51ec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c51ec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51ecc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c51eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51ed0: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C51ED0u;
    SET_GPR_U32(ctx, 31, 0x1C51ED8u);
    ctx->pc = 0x1C51ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51ED0u;
    // 0x1c51ed4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C51ED0u, 0x1C51ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51ED8u;
label_1c51ed8:
    // 0x1c51ed8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51ed8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51edc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C51EDCu;
    {
        const bool branch_taken_0x1c51edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51EDCu;
        // 0x1c51ee0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51edc) {
            ctx->pc = 0x1C51E5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51e5c;
        }
    }
    ctx->pc = 0x1C51EE4u;
    // 0x1c51ee4: 0x0  nop
    ctx->pc = 0x1c51ee4u;
    // NOP
    // 0x1c51ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c51eec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c51eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c51ef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51ef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c51ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51ef8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c51efc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c51efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c51f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51f04: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c51f04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51f08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c51f08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51f0c: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C51F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C51F14u);
    ctx->pc = 0x1C51F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51F0Cu;
    // 0x1c51f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C51F0Cu, 0x1C51F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51F14u;
label_1c51f14:
    // 0x1c51f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51f18: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C51F18u;
    SET_GPR_U32(ctx, 31, 0x1C51F20u);
    ctx->pc = 0x1C51F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51F18u;
    // 0x1c51f1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C51F18u, 0x1C51F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51F20u;
label_1c51f20:
    // 0x1c51f20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c51f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c51f24: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c51f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c51f28: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51F28u;
    SET_GPR_U32(ctx, 31, 0x1C51F30u);
    ctx->pc = 0x1C51F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51F28u;
    // 0x1c51f2c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51F28u, 0x1C51F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51F30u;
label_1c51f30:
    // 0x1c51f30: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51f30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51f34: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c51f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c51f38: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c51f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c51f3c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c51f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c51f40: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51F40u;
    SET_GPR_U32(ctx, 31, 0x1C51F48u);
    ctx->pc = 0x1C51F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51F40u;
    // 0x1c51f44: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51F40u, 0x1C51F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51F48u;
label_1c51f48:
    // 0x1c51f48: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c51f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c51f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51f50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c51f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51f54: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51F54u;
        // 0x1c51f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51F5Cu;
    // 0x1c51f5c: 0x0  nop
    ctx->pc = 0x1c51f5cu;
    // NOP
    ctx->pc = 0x1c51f60u;
}
