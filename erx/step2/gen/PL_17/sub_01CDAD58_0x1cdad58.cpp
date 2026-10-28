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

// Function: sub_01CDAD58
// Address: 0x1cdad58 - 0x1cdadb0
void sub_01CDAD58_0x1cdad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAD58_0x1cdad58");
#endif

    switch (ctx->pc) {
        case 0x1cdad74u: goto label_1cdad74;
        case 0x1cdad7cu: goto label_1cdad7c;
        case 0x1cdad90u: goto label_1cdad90;
        case 0x1cdad94u: goto label_1cdad94;
        default: break;
    }

    ctx->pc = 0x1cdad58u;

    // 0x1cdad58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdad5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cdad5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cdad60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdad64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdad64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdad68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdad68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdad6c: 0xc736890  jal         func_1CDA240
    ctx->pc = 0x1CDAD6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDAD74u);
    ctx->pc = 0x1CDAD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAD6Cu;
    // 0x1cdad70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA240u, 0x1CDAD6Cu, 0x1CDAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAD74u;
label_1cdad74:
    // 0x1cdad74: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDAD74u;
    SET_GPR_U32(ctx, 31, 0x1CDAD7Cu);
    ctx->pc = 0x1CDAD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAD74u;
    // 0x1cdad78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDAD74u, 0x1CDAD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAD7Cu;
label_1cdad7c:
    // 0x1cdad7c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdad7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdad80: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDAD80u;
    {
        const bool branch_taken_0x1cdad80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CDAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAD80u;
        // 0x1cdad84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdad80) {
            ctx->pc = 0x1CDADA4u;
            goto label_1cdada4;
        }
    }
    ctx->pc = 0x1CDAD88u;
    // 0x1cdad88: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDAD88u;
    SET_GPR_U32(ctx, 31, 0x1CDAD90u);
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDAD88u, 0x1CDAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAD90u;
label_1cdad90:
    // 0x1cdad90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cdad90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cdad94:
    // 0x1cdad94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdad94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdad98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdad98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdad9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDAD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAD9Cu;
        // 0x1cdada0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDAD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDADA4u;
label_1cdada4:
    // 0x1cdada4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CDADA4u;
    {
        const bool branch_taken_0x1cdada4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDADA4u;
        // 0x1cdada8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdada4) {
            ctx->pc = 0x1CDAD94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdad94;
        }
    }
    ctx->pc = 0x1CDADACu;
    // 0x1cdadac: 0x0  nop
    ctx->pc = 0x1cdadacu;
    // NOP
    ctx->pc = 0x1cdadb0u;
}
